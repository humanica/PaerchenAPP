class activity{
public:
  activity();
  activity(char name, int aktiv, int wetterKritisch, int temperaturKritisch,
           int tagesKritisch, int tagesKritisch, int tag);
  ~activity();
  getname();
  getaktiv();
  getwetterKritisch();
  gettemperaturKritisch();
  gettagesKritisch();
  gettag();

private:
  int p_name;
  int p_aktiv;
  int p_wetterKritisch;
  int p_temperaturKritisch;
  int p_tagesKritisch;
  int p_tag;
}
