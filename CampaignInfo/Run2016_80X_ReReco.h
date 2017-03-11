

string CampaignName = "Run2016_80X_ReReco";

string LightMeasurementType = "incl";

const int nSupportedTaggers = 3;
TString SupportedTaggerName[nSupportedTaggers] = {"CSVv2", "cMVAv2", "DeepCSV"};
string CSVFileFlag = "_Moriond17_B_H";
float TaggerWP[nSupportedTaggers][3] = { { 0.5426, 0.8484, 0.9535}, 
					 {-0.5884, 0.4432, 0.9432},
					 { 0.2219, 0.6324, 0.8958} };

const int nFastSimDatasets = 5;
TString FastSimDatasetName[nFastSimDatasets] = {"_T1bbbb_1000_900", "_T1bbbb_1500_100", "_T1tttt_1200_800", "_T1tttt_1500_100", "_TTJets"};
string FastSimCSVFileFlag = "_fastsim_ttbar_26_1_2017";

float AbsoluteMinJetPt = 20.;
