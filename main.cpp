#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Activity.h"

using namespace std;  int aktiv;

void printActivity(vector<activity>&);
void initActivity(vector<activity>&);
vector<activity> filterActivity(vector<activity>&, int, int, int, int, int, int);
void voting(vector<activity>&);

int main(int argc, char *argv[]) {

  int aktiv;
  int sonnig;
  int warm;
  int heute;
  int sonntag;
  int tage;

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
  filterActivity(Activity, aktiv, sonnig, warm, heute, sonntag, tage);
  printActivity(Activity);
  voting(Activity);
}

void filterActivity(vector<activity>& Activity, int vaktiv, int vsonnig, int vwarm,
                    int vheute,int vsonntag, int vtage){
  unsigned int i=0;
  for (i=0;i<Activity.size();i++){
    if((vaktiv==1)&&(Activity[i].getaktiv()==0))Activity[i].setalive(0);
    if((Activity[i].gettagesKritisch()==1)&&(vtage==1))Activity[i].setalive(0);
    if((Activity[i].gettemperaturKritisch()==1)&&(vwarm==0))Activity[i].setalive(0);
    if((Activity[i].getwetterKritisch()==1)&&(vsonnig==0))Activity[i].setalive(0);
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
    if(Activity[i].getalive()==1)
    {
        cout<<"Aktivität: "<<Activity[i].getname()<<endl;
    };
  }
}

void voting(vector<activity>& Activity){
/*
Diese Funktion soll für alle aktiven Elemente ein Voting verlangen und
alle Votings normieren. Dafür muss jeder Vote (1-10) durch die Gesamtsumme
der abgegebenen votes einer Person subtrahiert werden. Anschließend werden für
jede Aktivität die Votes der beiden Parteien addiert und anschließend
kontrolliert welcher Vote am höchsten ist.

IT highlights:
Um durch die Vektoren zu itereieren kann alternativ zu i auch ein Iterator verwendet
werden. Mit diesem könnte es möglich sein das entpsrechende Object das sich in
der Stelle des Vektors befindet sofort anzusprechen.

Überlegungen:
- Es wäre schön wenn alle übrig gebliebenen Elemente in eine anderen Vektor gespeichert
würden, so muss man das gaze nicht von vorne durchlaufen.
*/


}
