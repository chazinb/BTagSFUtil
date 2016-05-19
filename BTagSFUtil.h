#include "BTagCalibrationStandalone.h"
#include <Riostream.h>
#include "TRandom3.h"
#include "TMath.h"
#include "TF1.h"

class BTagSFUtil{

 public:
    
  BTagSFUtil(string MeasurementType, string BTagAlgorithm, TString OperatingPoint, int SystematicIndex = 0, TString FastSimDataset = "", int Seed = 0);
  ~BTagSFUtil();

  float GetJetSF(int JetFlavor, float JetPt, float JetEta);
  float JetTagEfficiency(int JetFlavor, float JetPt, float JetEta);
  bool IsTaggedMC(float JetDiscriminant);
  bool IsTagged(float JetDiscriminant, int JetFlavor, float JetPt, float JetEta);

 private:

  BTagCalibrationReader *reader_bc, *reader_l, *reader_bc_central, *reader_l_central;
  BTagCalibrationReader *fastsim_b, *fastsim_c, *fastsim_l, *fastsim_central;

  void GetBTagPayload(TString BTagAlgorithm, TString DataPeriod);
  void GetFastSimPayload(TString BTagAlgorithm, TString FastSimDataset);

  float ScaleFactorB(float JetPt, int SystematicFlag);
  float ScaleFactorLight(float JetPt, float JetEta, int SystematicFlag);
  float ScaleFactorJet(int JetFlavor, float JetPt, float JetEta, int SystematicFlag);

  float TagEfficiencyB(float JetPt, float JetEta);
  float TagEfficiencyC(float JetPt, float JetEta);
  float TagEfficiencyLight(float JetPt, float JetEta);

  float FastSimCorrectionFactor(int JetFlavor, float JetPt, float JetEta);
  
  TRandom3* rand_;

  TString TaggerName, TaggerOP;
  float TaggerCut;
  int iTagger;

  TF1 *funSFb, *funSFlight[4][3];

  int nBTagPtBins;
  float BTagPtBinEdge[50];
  float SFb_error[50];

  int nBTagEtaBins;
  float BTagEtaBinEdge[50];

  bool IsFastSimDataset;
  int nFastSimPtBins, nFastSimEtaBins[3];
  float FastSimPtBinEdge[50], FastSimEtaBinEdge[50][3];
  float FastSimCF[50][2][3];
  float FastSimCF_error[50][2][3]; int FastSimSystematic;
    
};

