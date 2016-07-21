

string CampaignName = "Run2016_80X";

string LightMeasurementType = "incl";

const int nSupportedTaggers = 2;
TString SupportedTaggerName[nSupportedTaggers] = {"CSVv2", "cMVAv2"};
string CSVFileFlag = "_ichep";
float TaggerWP[nSupportedTaggers][3] = { {0.460, 0.800, 0.935}, {-0.715, 0.185, 0.875} };

const int nFastSimDatasets = 5;
TString FastSimDatasetName[nFastSimDatasets] = {"_T1bbbb_1000_900", "_T1bbbb_1500_100", "_T1tttt_1200_800", "_T1tttt_1500_100", "_TTJets"};
string FastSimCSVFileFlag = "_ichepfastsim";

float AbsoluteMinJetPt = 20.;
