#ifndef BTagEntrySA_H
#define BTagEntrySA_H

/**
 *
 * BTagEntry
 *
 * Represents one pt- or discriminator-dependent calibration function.
 *
 * measurement_type:    e.g. comb, ttbar, di-mu, boosted, ...
 * sys_type:            e.g. central, plus, minus, plus_JEC, plus_JER, ...
 *
 * Everything is converted into a function, as it is easiest to store it in a
 * txt or json file.
 *
 ************************************************************/

#include <string>
#include <TF1.h>
#include <TH1.h>


class BTagEntrySA
{
public:
  enum OperatingPoint {
    OP_LOOSE=0,
    OP_MEDIUM=1,
    OP_TIGHT=2,
    OP_RESHAPING=3,
  };
  enum JetFlavor {
    FLAV_B=0,
    FLAV_C=1,
    FLAV_UDSG=2,
  };
  struct Parameters {
    OperatingPoint operatingPoint;
    std::string measurementType;
    std::string sysType;
    JetFlavor jetFlavor;
    float etaMin;
    float etaMax;
    float ptMin;
    float ptMax;
    float discrMin;
    float discrMax;

    // default constructor
    Parameters(
      OperatingPoint op=OP_TIGHT,
      std::string measurement_type="comb",
      std::string sys_type="central",
      JetFlavor jf=FLAV_B,
      float eta_min=-99999.,
      float eta_max=99999.,
      float pt_min=0.,
      float pt_max=99999.,
      float discr_min=0.,
      float discr_max=99999.
    );

  };

  BTagEntrySA() {}
  BTagEntrySA(const std::string &csvLine);
  BTagEntrySA(const std::string &func, Parameters p);
  BTagEntrySA(const TF1* func, Parameters p);
  BTagEntrySA(const TH1* histo, Parameters p);
  ~BTagEntrySA() {}
  static std::string makeCSVHeader();
  std::string makeCSVLine() const;
  static std::string trimStr(std::string str);

  // public, no getters needed
  std::string formula;
  Parameters params;

};

#endif  // BTagEntrySA_H


#ifndef BTagCalibrationSA_H
#define BTagCalibrationSA_H

/**
 * BTagCalibrationSA
 *
 * The 'hierarchy' of stored information is this:
 * - by tagger (BTagCalibrationSA)
 *   - by operating point or reshape bin
 *     - by jet parton flavor
 *       - by type of measurement
 *         - by systematic
 *           - by eta bin
 *             - as 1D-function dependent of pt or discriminant
 *
 ************************************************************/

#include <map>
#include <vector>
#include <string>
#include <istream>
#include <ostream>


class BTagCalibrationSA
{
public:
  BTagCalibrationSA() {}
  BTagCalibrationSA(const std::string &tagger);
  BTagCalibrationSA(const std::string &tagger, const std::string &filename);
  ~BTagCalibrationSA() {}

  std::string tagger() const {return tagger_;}

  void addEntry(const BTagEntrySA &entry);
  const std::vector<BTagEntrySA>& getEntries(const BTagEntrySA::Parameters &par) const;

  void readCSV(std::istream &s);
  void readCSV(const std::string &s);
  void makeCSV(std::ostream &s) const;
  std::string makeCSV() const;

protected:
  static std::string token(const BTagEntrySA::Parameters &par);

  std::string tagger_;
  std::map<std::string, std::vector<BTagEntrySA> > data_;

};

#endif  // BTagCalibrationSA_H


#ifndef BTagCalibrationReaderSA_H
#define BTagCalibrationReaderSA_H

/**
 * BTagCalibrationReaderSA
 *
 * Helper class to pull out a specific set of BTagEntrySA's out of a
 * BTagCalibration. TF1 functions are set up at initialization time.
 *
 ************************************************************/

#include <memory>
#include <string>



class BTagCalibrationReaderSA
{
public:
  class BTagCalibrationReaderImplSA;

  BTagCalibrationReaderSA() {}
  BTagCalibrationReaderSA(BTagEntrySA::OperatingPoint op,
                        const std::string & sysType="central",
                        const std::vector<std::string> & otherSysTypes={});

  void load(const BTagCalibrationSA & c,
            BTagEntrySA::JetFlavor jf,
            const std::string & measurementType="comb");

  double eval(BTagEntrySA::JetFlavor jf,
              float eta,
              float pt,
              float discr=0.) const;

  double eval_auto_bounds(const std::string & sys,
                          BTagEntrySA::JetFlavor jf,
                          float eta,
                          float pt,
                          float discr=0.) const;

  std::pair<float, float> min_max_pt(BTagEntrySA::JetFlavor jf,
                                     float eta,
                                     float discr=0.) const;

protected:
  std::shared_ptr<BTagCalibrationReaderImplSA> pimpl;
};


#endif  // BTagCalibrationReader_H




