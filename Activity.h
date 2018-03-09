#include <string>

class activity{
public:
  activity();
  activity(std::string name, int aktiv, int wetterKritisch, int temperaturKritisch,
           int tagesKritisch, int tag);
  ~activity();
  std::string getname() const;
  int getaktiv();
  int getwetterKritisch();
  int gettemperaturKritisch();
  int gettagesKritisch();
  int gettag();

private:
  std::string p_name;
  int p_aktiv;
  int p_wetterKritisch;
  int p_temperaturKritisch;
  int p_tagesKritisch;
  int p_tag;
  int p_alive;
};
