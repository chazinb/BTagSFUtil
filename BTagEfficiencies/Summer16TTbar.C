/* These Efficiencies have been derived for Spring16 ttbar events and should
be used only for the same MC samples or for events with similar topology */

float BTagSFUtil::TagEfficiencyB(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {
    //efficienciesMC_CMVA[('b','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.786522805691;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.863419890404;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.891770482063;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.90013563633;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.902441203594;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.894309580326;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.88657450676;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.761625647545;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.849683403969;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.880539119244;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.888544619083;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.89031124115;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.884897887707;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.862769007683;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.684971511364;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.795183479786;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.829549372196;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.836615204811;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.828312516212;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.812659263611;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.781647503376;
    
  }

  if (TaggerOP=="cMVAv2M") {
    //efficienciesMC_CMVA[('b','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.576319217682;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.697248518467;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.737517178059;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.744035124779;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.737128853798;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.712062835693;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.695049583912;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.524527788162;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.659009456635;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.704463720322;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.712390899658;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.708682954311;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.679333686829;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.636464595795;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.425910353661;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.576749801636;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.626910448074;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.627013921738;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.610538780689;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.560746610165;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.53623431921;

  }
  
  if (TaggerOP=="cMVAv2T") {

    //efficienciesMC_CMVA[('b','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.366511285305;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.50668078661;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.551958441734;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.558333694935;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.540809094906;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.500646412373;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.466718792915;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.308485835791;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.451862424612;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.504958212376;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.515585124493;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.500631928444;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.442953824997;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.417160719633;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.22635743022;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.371658235788;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.426384538412;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.423176527023;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.39453369379;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.316361874342;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.282228797674;
    
  }

  if (TaggerOP=="CSVv2L") {

    //efficienciesMC_CSV[('b','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.753347098827;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.833797633648;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.86048334837;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.865863740444;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.864734351635;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.848630726337;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.846847474575;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.733750641346;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.822504162788;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.847220480442;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.852612674236;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.851897716522;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.835027873516;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.814325690269;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.652525424957;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.765756905079;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.797578752041;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.800674438477;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.796916902065;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.782070934772;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.768291950226;
  }

  if (TaggerOP=="CSVv2M") {
    //efficienciesMC_CSV[('b','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.556841850281;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.66975569725;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.704963505268;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.712388813496;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.703782618046;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.673267483711;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.653950035572;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.516430795193;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.635772764683;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.668484389782;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.672992765903;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.66901576519;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.628263056278;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.587670385838;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.410916000605;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.551010608673;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.584447562695;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.580163300037;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.568271756172;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.500240206718;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.473871916533;
    
  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('b','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.354204118252;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.468210309744;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.489356249571;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.502222239971;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.490051776171;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.457081079483;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.419924527407;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.294944256544;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.413101792336;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.443239271641;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.452146649361;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.44060382247;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.385651677847;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.377467930317;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.211980521679;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.333336383104;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.37142547965;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.365926116705;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.343781530857;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.270026743412;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.257646411657;
   
  }

  if (TaggerOP=="DeepCSVL") {
    //efficienciesMC_DeepCSV[('b','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.798141241074;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.858757793903;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.883072435856;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.893463015556;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.892538964748;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.889205157757;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.885877728462;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.784977972507;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.84691876173;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.869861423969;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.876360595226;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.875910699368;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.872482120991;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.866327464581;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.745183885098;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.807602643967;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.827971935272;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.83155798912;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.833006858826;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.831145942211;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.817264735699;


  }

  if (TaggerOP=="DeepCSVM") {

        //efficienciesMC_DeepCSV[('b','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.621978282928;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.716703355312;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.749967098236;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.759567677975;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.753184556961;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.736759364605;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.723067700863;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.591890335083;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.68917453289;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.719872236252;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.72444653511;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.71623390913;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.697075307369;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.666907310486;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.496896833181;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.610978901386;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.639868080616;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.6349208951;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.610334515572;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.579520463943;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.509604275227;
  }

  if (TaggerOP=="DeepCSVT") {

    //efficienciesMC_DeepCSV[('b','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.42805737257;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.547271966934;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.586937367916;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.593447089195;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.579581975937;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.545647442341;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.509991526604;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.388888299465;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.50933355093;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.546940207481;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.547700881958;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.533227622509;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.490198403597;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.453783839941;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.295094907284;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.420911937952;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.457463264465;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.451399236917;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.41806936264;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.363884419203;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.321583539248;
   
  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return  0.81;
  if (TaggerOP=="cMVAv2M") return  0.63;
  if (TaggerOP=="cMVAv2T") return  0.53;
  if (TaggerOP=="CSVv2L")  return  0.78;
  if (TaggerOP=="CSVv2M")  return  0.60;
  if (TaggerOP=="CSVv2T")  return  0.50;
  if (TaggerOP=="DeepCSVL")  return  0.81;
  if (TaggerOP=="DeepCSVM")  return  0.64;
  if (TaggerOP=="DeepCSVT")  return  0.53;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return  0.0;

}

float BTagSFUtil::TagEfficiencyC(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {

    //efficienciesMC_CMVA[('c','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.309124082327;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.339913010597;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.386214017868;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.385517179966;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.429270535707;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.45565700531;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.433837264776;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.29887098074;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.351802706718;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.367594897747;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.403408318758;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.455681532621;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.476068198681;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.536393761635;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.264145046473;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.321090996265;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.373029470444;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.394913136959;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.400933980942;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.509867310524;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.457359731197;

   
  }

  if (TaggerOP=="cMVAv2M") {

    //efficienciesMC_CMVA[('c','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.102414906025;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.117724187672;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.119142197073;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.140417292714;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.147025555372;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.140511780977;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.124964997172;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0868652462959;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.104646772146;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.115720413625;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.128800347447;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.158798530698;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.127955138683;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.151259943843;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0690257772803;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0850951299071;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.118882663548;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.119794771075;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.109180741012;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.135578796268;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.10942351073;
    
  }

  if (TaggerOP=="cMVAv2T") {

        //efficienciesMC_CMVA[('c','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0315511263907;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0276114810258;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0263788867742;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0342346504331;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0384912341833;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0318423435092;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0325386151671;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0222349856049;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0247626919299;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0258321091533;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0294533912092;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0342746190727;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0265626572073;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0366722084582;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0143605815247;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0179856214672;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0249015763402;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0221185218543;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0241989288479;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0176223460585;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 1.60828276421e-05;
   
  }

  if (TaggerOP=="CSVv2L") {

        //efficienciesMC_CSV[('c','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.300044775009;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.315828621387;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.334389984608;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.31779897213;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.346205800772;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.334185630083;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.335723161697;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.303087860346;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.335470408201;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.328458428383;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.332931816578;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.371594101191;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.339926749468;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.383334130049;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.281325161457;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.316828370094;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.343760937452;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.360565662384;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.347150087357;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.411149799824;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.421136081219;
  }

  if (TaggerOP=="CSVv2M") {

    //efficienciesMC_CSV[('c','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.113610073924;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.113841868937;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.112536482513;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.124273456633;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.119846925139;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.126602321863;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.108437225223;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0959720686078;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.107056111097;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.102142781019;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.118401817977;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.122260451317;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0910106524825;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.13371822238;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0728540346026;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0970325767994;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.108416952193;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.115266501904;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0767471939325;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.112741418183;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.101713180542;

  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('c','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0360180139542;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0274868495762;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0211671162397;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0292817950249;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0302071981132;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0238568969071;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0158126037568;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0241485908628;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0232711285353;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0196221061051;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0212294086814;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0288775172085;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0193341374397;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0295414030552;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.015837367624;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0175052843988;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0151931270957;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0149556165561;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.015558520332;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0117633314803;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00932631921023;

  }

  if (TaggerOP=="DeepCSVL") {

        //efficienciesMC_DeepCSV[('c','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.366724401712;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.34095954895;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.347513794899;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.342460513115;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.369574010372;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.375477135181;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.364681333303;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.362325459719;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.352824389935;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.331687539816;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.363662540913;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.379718273878;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.400934398174;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.420027762651;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.381568789482;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.370726495981;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.365801274776;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.373447537422;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.364851146936;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.410122156143;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.425004929304;
  }

  if (TaggerOP=="DeepCSVM") {

    //efficienciesMC_DeepCSV[('c','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.128759026527;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.111636191607;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.111425347626;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.118339076638;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.113196387887;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.108627945185;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.123423434794;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.111348681152;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.113138772547;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.111069373786;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.112355776131;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.119767166674;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.106781996787;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.110028125346;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0984446182847;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.106755852699;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.109960496426;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.113902904093;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0820887312293;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0873648896813;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.130976736546;

  }

  if (TaggerOP=="DeepCSVT") {

    //efficienciesMC_DeepCSV[('c','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0360762067139;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0267188474536;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0239246301353;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0246003400534;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0181534197181;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0230296868831;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0280140060931;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0263943225145;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0259112473577;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0251294262707;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0265510007739;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0254720933735;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0167630147189;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0181161221117;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0209399815649;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0250809472054;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0190730448812;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0274864528328;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0228990036994;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0179979093373;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0212879944593;

  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return  0.35;
  if (TaggerOP=="cMVAv2M") return  0.22;
  if (TaggerOP=="cMVAv2T") return  0.06;
  if (TaggerOP=="CSVv2L")  return  0.32;
  if (TaggerOP=="CSVv2M")  return  0.19;
  if (TaggerOP=="CSVv2T")  return  0.04;
  if (TaggerOP=="DeepCSVL")  return  0.35;
  if (TaggerOP=="DeepCSVM")  return  0.22;
  if (TaggerOP=="DeepCSVT")  return  0.06;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return  0.0;

}

float BTagSFUtil::TagEfficiencyLight(float JetPt, float JetEta) {

  if (JetPt>=300.) JetPt = 299.;

  if (TaggerOP=="cMVAv2L") {

    //efficienciesMC_CMVA[('l','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.072479814291;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0761580839753;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0776984170079;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0854653120041;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.103834755719;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.115427583456;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.135331004858;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0894985198975;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.096310660243;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.103720806539;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.120245628059;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.142064958811;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.170517146587;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.194081902504;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.102272927761;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.120119214058;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.133280813694;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.146940335631;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.185038626194;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.21635723114;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.230362191796;
    
  }

  if (TaggerOP=="cMVAv2M") {


    //efficienciesMC_CMVA[('l','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00795033015311;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00733944354579;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00676887435839;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00821245834231;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00925257429481;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00900084991008;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0130287529901;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00847961381078;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00861938484013;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00941075291485;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0115979099646;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0147859668359;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0165095385164;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0186116080731;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0099802557379;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0138068273664;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0147590152919;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0170263983309;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0230521224439;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0233085788786;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.027475412935;

  }

  if (TaggerOP=="cMVAv2T") {


    //efficienciesMC_CMVA[('l','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00172969826963;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00101401901338;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000692800153047;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000396587856812;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00144208234269;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00106729206163;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00210550520569;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00145004363731;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00084096356295;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000790533784311;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00126442639157;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000928925524931;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00135913130362;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00162660051137;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00120422651526;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00117859477177;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00120165175758;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00156537245493;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00280675687827;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.000976534443907;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00290731922723;
   
  }

  if (TaggerOP=="CSVv2L") {

       //efficienciesMC_CSV[('l','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.07596873492;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0772250592709;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0649829953909;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0591876357794;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0703824982047;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0692618712783;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0829856619239;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.133209824562;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.118517532945;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0935716480017;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0925580412149;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.104429639876;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.109029315412;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.112232379615;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.177582904696;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.156708374619;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.136567011476;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.133165627718;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.16302035749;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.173622667789;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.180195823312;
  }

  if (TaggerOP=="CSVv2M") {

        //efficienciesMC_CSV[('l','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00928706862032;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00821643602103;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00600094906986;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00575924525037;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00770910084248;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00778267532587;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0120363142341;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0102522941306;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0104406001046;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00890353135765;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00802106410265;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0101947756484;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0118604488671;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0138902552426;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0113023240119;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.016036067158;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.014655820094;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0145898796618;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0182642005384;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0216122977436;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0211260132492;
  }

  if (TaggerOP=="CSVv2T") {

    //efficienciesMC_CSV[('l','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0020352837164;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00104221922811;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000673555536196;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000383963604691;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00157420290634;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00106251740362;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00115644047037;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0015150961699;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000944206432905;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000766408978961;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000849281961564;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0010457187891;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000882849853951;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00112634105608;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.001366369077;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00156965048518;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.000903572654352;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00134043244179;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00151475786697;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00157523201779;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00339303119108;
   
  }

  if (TaggerOP=="DeepCSVL") {
    //efficienciesMC_DeepCSV[('l','L')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.101991064847;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0794146135449;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0658789798617;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0664927512407;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0755995735526;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0865568444133;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.102398619056;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.129394158721;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.105084910989;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0870731025934;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0936922580004;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0991293415427;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.12148925662;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.136516153812;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.182846069336;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.160803854465;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.143369600177;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.142561286688;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.160820767283;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.18340934813;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.206587091088;
   
  }

  if (TaggerOP=="DeepCSVM") {
    //efficienciesMC_DeepCSV[('l','M')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0103954588994;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00781364925206;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00616466766223;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00612012855709;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00787906069309;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00850055925548;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.0127529418096;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0132461944595;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0112565727904;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00975507777184;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00991063844413;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.010138195008;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0139332581311;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.0105892913416;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0166637022048;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0158348456025;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0127099035308;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0141003727913;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0130738960579;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.019399350509;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0217799320817;
   
  }

  if (TaggerOP=="DeepCSVT") {

    //efficienciesMC_DeepCSV[('l','T')] = [
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00158113264479;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000846070004627;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000695630442351;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000693005917128;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.00146277726162;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return 0.000887486152351;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.0 && fabs(JetEta)<0.8) return  0.00183804496191;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.001705478644;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000978628406301;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00117873272393;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.000733430031687;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00103903282434;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00103697623126;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=0.8 && fabs(JetEta)<1.6) return 0.00132167013362;
    if (JetPt>20.0 && JetPt<=30.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00149874389172;
    if (JetPt>30.0 && JetPt<=60.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00150083121844;
    if (JetPt>60.0 && JetPt<=90.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.000967553583905;
    if (JetPt>90.0 && JetPt<=120.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.001811808208;
    if (JetPt>120.0 && JetPt<=180.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.0011402531527;
    if (JetPt>180.0 && JetPt<=240.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.000767743622418;
    if (JetPt>240.0 && JetPt<=300.0 && fabs(JetEta)>=1.6 && fabs(JetEta)<2.4) return 0.00314061460085;
   
  }

  cout << "BTagSFUtil: Jet pt (" << JetPt << ") or jet eta (" << JetEta << ") out of range!" << endl;

  if (TaggerOP=="cMVAv2L") return  0.100;
  if (TaggerOP=="cMVAv2M") return  0.010;
  if (TaggerOP=="cMVAv2T") return  0.001;
  if (TaggerOP=="CSVv2L")  return  0.100;
  if (TaggerOP=="CSVv2M")  return  0.010;
  if (TaggerOP=="CSVv2T")  return  0.001;
  if (TaggerOP=="DeepCSVL")  return  0.100;
  if (TaggerOP=="DeepCSVM")  return  0.010;
  if (TaggerOP=="DeepCSVT")  return  0.001;

  cout << "BTagSFUtil: Tagger (" << TaggerOP << ") not valid!" << endl;

  return  0.0;

}

