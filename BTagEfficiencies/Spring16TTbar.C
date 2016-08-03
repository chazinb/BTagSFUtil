/* These Efficiencies have been derived for Spring16 ttbar events and should
be used only for the same MC samples or for events with similar topology */

float BTagSFUtil::TagEfficiencyB(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {

    //efficienciesMC_CMVA[('b','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.802099347115;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.881168425083;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.909427285194;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.913992226124;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.917718589306;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.918799757957;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.889680564404;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.782105863094;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.857707381248;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.889100432396;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.899522900581;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.898234307766;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.903846025467;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.890631914139;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.72264456749;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.821065545082;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.853467524052;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.858182966709;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.875952124596;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.864616155624;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.833857238293;
    
  }

  if (TaggerOP=="cMVAv2M") {

    //efficienciesMC_CMVA[('b','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.610717058182;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.736995697021;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.780034899712;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.789932906628;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.782950878143;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.769822776318;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.725558102131;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.556106686592;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.687299132347;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.736814558506;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.748859345913;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.743644893169;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.706825852394;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.67635422945;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.473102331161;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.61907762289;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.66330075264;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.67744410038;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.67407476902;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.641329884529;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.603497982025;

  }
  
  if (TaggerOP=="cMVAv2T") {

    //efficienciesMC_CMVA[('b','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.417979151011;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.557395756245;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.599114716053;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.597492396832;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.590131103992;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.557211816311;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.490826755762;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.342620164156;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.487380057573;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.542285442352;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.555425345898;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.535299599171;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.476723134518;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.441216766834;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.274322330952;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.421004593372;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.470263719559;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.48150831461;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.452828943729;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.422902733088;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.397045522928;
    
  }

  if (TaggerOP=="CSVv2L") {

    //efficienciesMC_CSV[('b','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.755292713642;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.843569278717;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.870175242424;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.873832166195;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.876740753651;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.886718392372;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.851114451885;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.729245007038;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.818189561367;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.847159385681;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.853377580643;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.855735480785;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.857253193855;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.825000226498;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.674436569214;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.780917882919;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.810916602612;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.815078735352;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.838411688805;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.818765044212;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.798153102398;

  }

  if (TaggerOP=="CSVv2M") {

    //efficienciesMC_CSV[('b','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.589384317398;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.715349137783;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.750471413136;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.753780722618;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.744955897331;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.716679394245;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.687772214413;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.536841511726;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.671183824539;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.70924526453;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.713879048824;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.701281666756;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.658715188503;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.607746124268;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.460894495249;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.595793962479;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.62936770916;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.636540830135;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.631405889988;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.570257484913;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.544184565544;
    
  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('b','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.395718216896;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.516574442387;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.546422243118;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.536850750446;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.530058920383;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.505285322666;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.448340058327;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.329094290733;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.456850111485;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.495723903179;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.507014334202;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.481820076704;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.423482477665;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.389738380909;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.259975194931;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.388652563095;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.423250734806;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.426200121641;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.402978211641;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.372001111507;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.333948433399;
   
  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return 0.81;
  if (TaggerOP=="cMVAv2M") return 0.63;
  if (TaggerOP=="cMVAv2T") return 0.53;
  if (TaggerOP=="CSVv2L")  return 0.78;
  if (TaggerOP=="CSVv2M")  return 0.60;
  if (TaggerOP=="CSVv2T")  return 0.50;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return 0.0;

}

float BTagSFUtil::TagEfficiencyC(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {

    //efficienciesMC_CMVA[('c','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.351339221001;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.397384852171;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.451127499342;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.477696090937;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.523876428604;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.581355571747;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.530763447285;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.335082769394;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.418294698;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.425051212311;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.459718257189;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.478071421385;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.543804168701;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.551700294018;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.34882953763;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.397807776928;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.44267603755;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.449588209391;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.459829777479;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.569755077362;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.603439211845;
   
  }

  if (TaggerOP=="cMVAv2M") {

    //efficienciesMC_CMVA[('c','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.137583419681;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.156058833003;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.180854678154;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.23802447319;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.215467005968;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.239279732108;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.202235817909;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.108401559293;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.153345569968;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.140631571412;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.1756554842;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.185426309705;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.221835911274;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.245206296444;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.102701552212;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.126361891627;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.143276065588;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.142682656646;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.162114053965;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.20026960969;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.254994720221;
    
  }

  if (TaggerOP=="cMVAv2T") {

    //efficienciesMC_CMVA[('c','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0428042709827;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0441414415836;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0475147180259;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0669046267867;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0591272749007;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0446496233344;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0409018173814;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0272596366704;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0390905067325;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0424078330398;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0530496388674;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0401377975941;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0610081031919;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0176290925592;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0214388575405;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0310215409845;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.03379349038;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.030307546258;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0152716897428;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0298153199255;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.116695195436;
   
  }

  if (TaggerOP=="CSVv2L") {

    //efficienciesMC_CSV[('c','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.346716105938;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.360709369183;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.366497308016;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.389780431986;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.406134873629;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.423474192619;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.379099905491;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.321529090405;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.391347378492;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.328085333109;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.341785132885;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.396348029375;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.445900171995;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.499529510736;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.338880628347;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.366788744926;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.375142633915;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.365174353123;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.366305023432;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.483660310507;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.527473330498;
    
  }

  if (TaggerOP=="CSVv2M") {

    //efficienciesMC_CSV[('c','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.147489666939;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.159466609359;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.174654781818;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.211027115583;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.173610553145;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.164741382003;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.157739564776;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.109376512468;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.158739373088;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.13746997714;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.178339496255;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.165841698647;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.161583989859;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.176696285605;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.102083705366;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.130765587091;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.142348691821;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.148742765188;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.103188447654;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.120547324419;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.22341118753;

  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('c','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0471793338656;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0377421602607;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0332069024444;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0682443007827;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0488311089575;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0431042313576;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0318570509553;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0350826457143;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0367702357471;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0336135476828;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0495322197676;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0361834838986;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0507052913308;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0151296462864;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.02008549124;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0318589992821;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0300980880857;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0300815813243;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00753078935668;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0448592677712;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0755586773157;

  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return 0.35;
  if (TaggerOP=="cMVAv2M") return 0.22;
  if (TaggerOP=="cMVAv2T") return 0.06;
  if (TaggerOP=="CSVv2L")  return 0.32;
  if (TaggerOP=="CSVv2M")  return 0.19;
  if (TaggerOP=="CSVv2T")  return 0.04;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return 0.0;

}

float BTagSFUtil::TagEfficiencyLight(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {

    //efficienciesMC_CMVA[('l','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.093795016408;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0986683219671;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.104406654835;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.108461894095;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.141660347581;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.139777988195;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.177868291736;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.105721615255;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.123566605151;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.130753770471;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.14065989852;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.153352558613;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.176849216223;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.189545303583;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.129575103521;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.158768311143;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.1671577245;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.197728201747;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.220055982471;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.260615944862;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.266076058149;
    
  }

  if (TaggerOP=="cMVAv2M") {

    //efficienciesMC_CMVA[('l','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0099689476192;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0101835019886;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0116621796042;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0134289534763;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0164024662226;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0132851144299;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0313433893025;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0104231406003;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00966833345592;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0127366222441;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0143086081371;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0170703008771;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0250423364341;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0238161478192;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0125348344445;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0173242446035;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.019601456821;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0250432249159;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0269562080503;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0340007245541;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0285160746425;

  }

  if (TaggerOP=="cMVAv2T") {

    //efficienciesMC_CMVA[('l','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0022037839517;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00108047272079;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00135299074464;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00116058904678;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000561484543141;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00246783648618;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00249700504355;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00166806019843;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00117981352378;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00103609345388;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00175477191806;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00141498504672;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00286926864646;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000816713436507;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.000925657455809;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00156515673734;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00208587292582;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00175851886161;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00411037961021;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00355931743979;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00261474796571;
   
  }

  if (TaggerOP=="CSVv2L") {

    //efficienciesMC_CSV[('l','L')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.138042628765;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.103334985673;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0770160630345;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0693604648113;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0834940746427;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0807854756713;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.103403583169;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.155286312103;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.129131048918;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.101412422955;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0966993272305;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.112229064107;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.118837922812;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.141261398792;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.194360464811;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.170128747821;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.14708095789;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.166453197598;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.167242184281;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.202705174685;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.229896813631;
   
  }

  if (TaggerOP=="CSVv2M") {

    //efficienciesMC_CSV[('l','M')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0125940935686;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0124487541616;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0106310732663;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00867974106222;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0126820160076;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0109076797962;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0110301449895;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0134867168963;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0151037517935;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0116925612092;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0115367099643;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0104999141768;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0124593805522;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0104477098212;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0163919590414;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0209174528718;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0178718715906;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.020573541522;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0245132893324;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0255441069603;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0168662834913;
    
  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('l','T')] = [
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0024505709298;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0013849271927;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00135919486638;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0010314922547;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000937916978728;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00143203942571;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00335279922001;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00170449598227;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00136189511977;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000905790773686;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00222550751641;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0017883584369;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00246482295915;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00134502991568;
    if (JetPt>20.0 && JetPt<30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00169575284235;
    if (JetPt>30.0 && JetPt<60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00156054424588;
    if (JetPt>60.0 && JetPt<90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00163374945987;
    if (JetPt>90.0 && JetPt<120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00244979234412;
    if (JetPt>120.0 && JetPt<180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00310712005012;
    if (JetPt>180.0 && JetPt<240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00267865904607;
    if (JetPt>240.0 && JetPt<300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.001;
   
  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return 0.100;
  if (TaggerOP=="cMVAv2M") return 0.010;
  if (TaggerOP=="cMVAv2T") return 0.001;
  if (TaggerOP=="CSVv2L")  return 0.100;
  if (TaggerOP=="CSVv2M")  return 0.010;
  if (TaggerOP=="CSVv2T")  return 0.001;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return 0.0;

}
