// https://twiki.cern.ch/twiki/bin/viewauth/CMS/BTagCalibration
#include "BTagSFUtil.h"
#include "BTagCalibrationStandalone.cpp"

// Jamboree 2015
//#include "CampaignInfo/Run2015_74X.h"
//#include "BTagEfficiencies/Summer15TTbar.C"

// Moriond 2015
//#include "CampaignInfo/Run2015_76X.h"
//#include "BTagEfficiencies/Fall15TTbar.C"

// ICHEP 2016
#include "CampaignInfo/Run2016_80X.h"
#include "BTagEfficiencies/Spring16TTbar.C"

BTagSFUtil::BTagSFUtil(string MeasurementType, string BTagAlgorithm, TString OperatingPoint, int SystematicIndex, TString FastSimDataset, int Seed) {

  rand_ = new TRandom3(Seed);

  string CSVFileName = "../BTagSFUtil/BTagScaleFactors/" + CampaignName + "/" + BTagAlgorithm + CSVFileFlag + ".csv";
  BTagCalibrationSA calib(BTagAlgorithm, CSVFileName);

  SystematicFlagB  = "central";
  SystematicFlagC  = "central";
  SystematicFlagL  = "central";
  if (abs(SystematicIndex)<10) {
    if (SystematicIndex==-1) SystematicFlagB = "down";
    if (SystematicIndex==+1) SystematicFlagB = "up";
    if (SystematicIndex==-2) cout << "BTagSFUtil: SFc not available yet";
    if (SystematicIndex==+2) cout << "BTagSFUtil: SFc not available yet";
    SystematicFlagC = SystematicFlagB;
    if (SystematicIndex==-3) SystematicFlagL = "down";
    if (SystematicIndex==+3) SystematicFlagL = "up";
  }

  TaggerCut = -999.;
  TaggerName = BTagAlgorithm;
  TaggerOP = BTagAlgorithm;

  int iTagger = -1;
  for (int itg = 0; itg<nSupportedTaggers; itg++) 
    if (SupportedTaggerName[itg]==TaggerName) iTagger = itg; 

  if (iTagger<0) 
    cout << " " << TaggerName << " not supported for " << CampaignName << endl;

  if (OperatingPoint=="Loose")  {
    TaggerOP += "L";
    TaggerCut = TaggerWP[iTagger][0];
    reader = new BTagCalibrationReaderSA(BTagEntrySA::OP_LOOSE, "central", {"up", "down"});
  } else if (OperatingPoint=="Medium")  {
    TaggerOP += "M";
    TaggerCut = TaggerWP[iTagger][1];
    reader = new BTagCalibrationReaderSA(BTagEntrySA::OP_MEDIUM, "central", {"up", "down"});
  } else if (OperatingPoint=="Tight")  {
    TaggerOP += "T";
    TaggerCut = TaggerWP[iTagger][2];
    reader = new BTagCalibrationReaderSA(BTagEntrySA::OP_TIGHT, "central", {"up", "down"});
  }
  reader->load(calib, BTagEntrySA::FLAV_B,    MeasurementType); 
  reader->load(calib, BTagEntrySA::FLAV_C,    MeasurementType); 
  reader->load(calib, BTagEntrySA::FLAV_UDSG, LightMeasurementType); 
  
  if (TaggerCut==-999.) 
    cout << " " << TaggerName << " not supported for " << OperatingPoint << " WP" << endl;

  //FastSimSystematic = 0;
  //if (abs(SystematicIndex)>10) FastSimSystematic = SystematicIndex%10;
  //GetFastSimPayload(BTagAlgorithm, FastSimDataset); // Run1 style
  IsFastSimDataset = false;

  if (FastSimDataset!="") {

    IsFastSimDataset = true;

    string FastSimName = "";
    for (int idt = 0; idt<nFastSimDatasets; idt++)
      if (FastSimDataset==FastSimDatasetName[idt]) FastSimName = FastSimDatasetName[idt];
    
    string FastSimCSVFileName = "../BTagSFUtil/FastSimCorrectionFactors/" + CampaignName + "/" + BTagAlgorithm + FastSimName + FastSimCSVFileFlag + ".csv";
    BTagCalibrationSA fastsimcalib(BTagAlgorithm, FastSimCSVFileName);
    
    FastSimSystematicFlagB = "central";
    FastSimSystematicFlagC = "central";
    FastSimSystematicFlagL = "central";
    if (abs(SystematicIndex)>=11) {
      if (SystematicIndex==-11) FastSimSystematicFlagB = "down";
      if (SystematicIndex==+11) FastSimSystematicFlagB = "up";
      if (SystematicIndex==-12) FastSimSystematicFlagC = "down";
      if (SystematicIndex==+12) FastSimSystematicFlagC = "up";
      if (SystematicIndex==-13) FastSimSystematicFlagL = "down";
      if (SystematicIndex==+13) FastSimSystematicFlagL = "up";
    }

    
    if (OperatingPoint=="Loose")  {
      fastsimreader = new BTagCalibrationReaderSA(BTagEntrySA::OP_LOOSE,  "central", {"up", "down"});
    } else if (OperatingPoint=="Medium")  {
      fastsimreader = new BTagCalibrationReaderSA(BTagEntrySA::OP_MEDIUM, "central", {"up", "down"});
    } else if (OperatingPoint=="Tight")  {
      fastsimreader = new BTagCalibrationReaderSA(BTagEntrySA::OP_TIGHT,  "central", {"up", "down"});
    }
    fastsimreader->load(fastsimcalib, BTagEntrySA::FLAV_B,    "fastsim"); 
    fastsimreader->load(fastsimcalib, BTagEntrySA::FLAV_C,    "fastsim"); 
    fastsimreader->load(fastsimcalib, BTagEntrySA::FLAV_UDSG, "fastsim"); 
    
  }
  
}

BTagSFUtil::~BTagSFUtil() {

  delete rand_;

}

float BTagSFUtil::FastSimCorrectionFactor(int JetFlavor, float JetPt, float JetEta) {

  float CF = 1.;

  float ThisJetPt = JetPt;

  if (abs(JetFlavor)==5) 
    CF = fastsimreader->eval_auto_bounds(FastSimSystematicFlagB, BTagEntrySA::FLAV_B, JetEta, JetPt);
  else if (abs(JetFlavor)==4) 
    CF = fastsimreader->eval_auto_bounds(FastSimSystematicFlagC, BTagEntrySA::FLAV_C, JetEta, JetPt);
  else 
    CF = fastsimreader->eval_auto_bounds(FastSimSystematicFlagL, BTagEntrySA::FLAV_UDSG, JetEta, JetPt);
 

  return CF;

}

float BTagSFUtil::JetTagEfficiency(int JetFlavor, float JetPt, float JetEta) {

  if (abs(JetFlavor)==5) return TagEfficiencyB(JetPt, JetEta);
  else if (abs(JetFlavor)==4) return TagEfficiencyC(JetPt, JetEta);
  else return TagEfficiencyLight(JetPt, JetEta);

}

float BTagSFUtil::GetJetSF(int JetFlavor, float JetPt, float JetEta) {

  if (fabs(JetEta)>2.4) {

    cout << "SF not supported for jet eta>2.4" << endl;
    return 0.;

  }

  if (JetPt<AbsoluteMinJetPt) {

    cout << "SF not supported for jet Pt<" << AbsoluteMinJetPt << endl;
    return 0.;

  }
    
  float Btag_SF;

  if (abs(JetFlavor)==5) 
    Btag_SF = reader->eval_auto_bounds(SystematicFlagB, BTagEntrySA::FLAV_B, JetEta, JetPt);
  else if (abs(JetFlavor)==4) 
    Btag_SF = reader->eval_auto_bounds(SystematicFlagC, BTagEntrySA::FLAV_C, JetEta, JetPt);
  else 
    Btag_SF = reader->eval_auto_bounds(SystematicFlagL, BTagEntrySA::FLAV_UDSG, JetEta, JetPt);
  
  if (IsFastSimDataset)
    Btag_SF *= FastSimCorrectionFactor(JetFlavor, JetPt, JetEta);
  
  return Btag_SF;
  
}

bool BTagSFUtil::IsTaggedMC(float JetDiscriminant) {

  return JetDiscriminant>TaggerCut;

}

bool BTagSFUtil::IsTagged(float JetDiscriminant, int JetFlavor, float JetPt, float JetEta) {
  
  bool isBTagged = JetDiscriminant>TaggerCut;

  if (JetFlavor==-999999) return isBTagged; // Data: no correction needed

  bool newBTag = isBTagged;

  float Btag_SF = GetJetSF(JetFlavor, JetPt, JetEta);
  
  if (Btag_SF == 1) return newBTag; //no correction needed 

  //throw die
  float coin = rand_->Uniform(1.);    
 
  if(Btag_SF > 1){  // use this if SF>1

    if( !isBTagged ) {

      float Btag_eff = JetTagEfficiency(JetFlavor, JetPt, fabs(JetEta));

      //fraction of jets that need to be upgraded
      float mistagPercent = (1.0 - Btag_SF) / (1.0 - (1./Btag_eff) );
      
      //upgrade to tagged
      if( coin < mistagPercent ) {newBTag = true;}
    }

  }else{  // use this if SF<1
      
    //downgrade tagged to untagged
    if( isBTagged && coin > Btag_SF ) {newBTag = false;}

  }

  return newBTag;

}

