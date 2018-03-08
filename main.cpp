#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <time.h>
#include <string>
#include "Activity.h"
#include <iterator>

using namespace std;

void printActivity(vector<activity>&);
void initActivity(vector<activity>&);
void filterActivity(vector<activity>&);
void voting(vector<activity>&);

int aktiv = 0;
int sonnig = 0;
int warm = 0;
int heute = 0;
int sonntag = 0;
int tage = 0;

int main(int argc, char *argv[]) {

  printf("Aktiv? \n");
  scanf("%d",&aktiv);
  printf("Sonnig? \n");
  scanf("%d",&sonnig);
  printf("Warm? \n");
  scanf("%d",&warm);
  printf("Heute? \n");
  scanf("%d",&heute);
  printf("Sonntag? \n");
  scanf("%d",&sonntag);
  printf("Tage? \n");
  scanf("%d",&tage);

  vector<activity> Activity;
  initActivity(Activity);
  filterActivity(Activity);
  printActivity(Activity);
  voting(Activity);
}

void filterActivity(vector<activity>& Activity){
  vector<activity> Aktive;
  unsigned int i=0;
  for (i=0;i<Activity.size();i++){
    if(!(((aktiv==1)&&(Activity[i].getaktiv()==0)) &&
        ((Activity[i].gettagesKritisch()==1)&&(tage==1)) &&
        ((Activity[i].gettemperaturKritisch()==1)&&(warm==0)) &&
        ((Activity[i].getwetterKritisch()==1)&&(sonnig==0))))
    Activity.erase(Activity.begin()+i);
  }
};

void initActivity(vector<activity>& Activity){
  activity Museum("Museum",0,0,0,0,0);
  Activity.push_back(Museum);

  activity Jumphouse("Jumphouse",1,0,0,1,1);
  Activity.push_back(Jumphouse);

  activity Serie("Serie",0,0,0,0,0);
  Activity.push_back(Serie);

  activity Zoo("Zoo",0,1,1,0,1);
  Activity.push_back(Zoo);

  activity FreibadSee("FreibadSee",1,1,1,1,1);
  Activity.push_back(FreibadSee);

  activity Kaffee("Kaffee",0,0,0,0,0);
  Activity.push_back(Kaffee);

  activity Kino("Museum",0,0,0,0,0);
  Activity.push_back(Kino);

  activity Kochen("Kochen",0,0,0,0,0);
  Activity.push_back(Kochen);

  activity Shopping("Shopping",0,0,0,0,1);
  Activity.push_back(Shopping);

  activity Klettern("Klettern",1,0,0,0,1);
  Activity.push_back(Klettern);

  activity Spielbar("Spielbar",0,0,0,0,1);
  Activity.push_back(Spielbar);

  activity Hochseilgarten("Hochseilgarten",1,1,0,0,1);
  Activity.push_back(Hochseilgarten);

  activity Freizeitpark("Freizeitpark",0,1,0,0,1);
  Activity.push_back(Freizeitpark);

  activity Disco("Disco",0,0,0,0,0);
  Activity.push_back(Disco);

  activity Bar("Museum",0,0,0,0,0);
  Activity.push_back(Bar);

  activity Schlittschuh("Museum",1,0,2,0,1);
  Activity.push_back(Schlittschuh);

  activity Essen("Essen",0,0,0,0,0);
  Activity.push_back(Essen);

  activity Tierchen("Tierchen",0,0,0,0,0);
  Activity.push_back(Tierchen);

  activity Stadtpark("Stadtpark",0,1,0,0,0);
  Activity.push_back(Stadtpark);

  activity Grillen("Grillen",0,0,0,0,0);
  Activity.push_back(Grillen);

  activity Lasertek("Lasertek",1,0,0,0,1);
  Activity.push_back(Lasertek);

  activity Sport("Sport",1,0,0,0,0);
  Activity.push_back(Sport);

  activity Fotografie("Museum",0,1,0,0,1);
  Activity.push_back(Fotografie);

  activity Zocken("Zocken",0,0,0,0,0);
  Activity.push_back(Zocken);

  activity Wandertour("Wandertour",0,1,0,0,0);
  Activity.push_back(Wandertour);

  activity Minigolf("Minigolf",0,1,0,0,0);
  Activity.push_back(Minigolf);

  activity Terme("Terme",0,0,0,1,1);
  Activity.push_back(Terme);
}

void printActivity(vector<activity>& Activity){
  unsigned i=0;
  for (i=0;i<Activity.size();i++){
    cout<<"Aktivität: "<<Activity[i].getname()<<endl;
  };
}

void voting(vector<activity>& Activity){
  map<string,int> lukasRelative;
  map<string,int> lukasAbsolute;
  map<string,int> juliaRelative;
  map<string,int> juliaAbsolute;
  map <string, int> :: iterator itr;
  int LukasVoteTmp,JuliaVoteTmp;
  int lukasGesamt = 0;
  int juliaGesamt = 0;
  string tmpString="";

  unsigned int i=0;
  for (i=0;i<Activity.size();i++){
    tmpString=Activity[i].getname();
    cout << "Aktivität " << Activity[i].getname() << " Lukas vote (1-10): " << endl;
    cin >> LukasVoteTmp;
    lukasGesamt=LukasVoteTmp;
    lukasRelative[Activity[i].getname()]=LukasVoteTmp;
  };
  for (i=0;i<Activity.size();i++){
    cout << "Aktivität " << Activity[i].getname() << " Julia vote (1-10): " << endl;
    cin >> JuliaVoteTmp;
    juliaGesamt+=JuliaVoteTmp;
    juliaRelative[Activity[i].getname()]=JuliaVoteTmp;
  };
  int absoluteVote;
  for (const auto& itr: lukasRelative){
    absoluteVote = itr.second/lukasGesamt;
    lukasAbsolute[itr.first]=absoluteVote;
  }
  for (const auto& itr: juliaRelative){
    absoluteVote = itr.second/lukasGesamt;
    juliaAbsolute[itr.first]=absoluteVote;
  }
}
