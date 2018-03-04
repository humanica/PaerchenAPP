#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


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

  <vector>activity Activity;
  activity Museum("museum",0,0,0,0,0);
  Activity.push_back(Museum);

  activity Jumphouse("Jumphouse",1,0,0,1,1);
  Activity.push_back(Jumphouse);

  activity Serie("Serienmarathon/Doku",0,0,0,0,0);
  Activity.push_back(Serie);

  activity Zoo("Zoo",0,1,1,0,1);
  Activity.push_back(Zoo);

  activity Freibad("Freibad/See",1,1,1,1,1);
  Activity.push_back(Freibad);

  activity Kaffee("Kaffee/Tee trinken gehen",0,0,0,0,0);
  Activity.push_back(Kaffee);

  activity Kino("Kino",0,0,0,0,0);
  Activity.push_back(Kino);

  activity Kochen("Kochen",0,0,0,0,0);
  Activity.push_back(Kochen);

  activity Shopping("Shopping",0,0,0,0,1);
  Activity.push_back(Shopping);

  activity Wandertour("Wandertour",1,1,0,0,1);
  Activity.push_back(Wandertour);

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

  activity Bar("Bar",0,0,0,0,0);
  Activity.push_back(Bar);

  activity Schlittschuh("Schlittschuh fahren",1,0,2,0,1);
  Activity.push_back(Schlittschuh);

  activity Essen("Essen gehen",0,0,0,0,0);
  Activity.push_back(Essen);

  activity Tierchen("Tierhandlung besuchen",0,0,0,0,0);
  Activity.push_back(Tierchen);

  activity Stadtpark("Stadtpark",0,1,0,0,0);
  Activity.push_back(Stadtpark);

  activity Grillen("Grillen",0,0,0,0,0);
  Activity.push_back(Grillen);

  activity Lasertek("Lasertek",1,0,0,0,1);
  Activity.push_back(Lasertek);

  activity Sport("Sport (Federball,Volleyball,Basketball",1,0,0,0,0);
  Activity.push_back(Sport);

  activity Foto("Besichtigung/Fotografie",0,1,0,0,1);
  Activity.push_back(Foto);

  activity Zocken("Zocken",0,0,0,0,0);
  Activity.push_back(Zocken);

  activity Wandertour("Wandertour",0,q,0,0,0);
  Activity.push_back(Wandertour);

  activity Minigolf("Blacklight Minigolf",0,1,0,0,0);
  Activity.push_back(Minigolf);

  activity Terme("Terme/Rutschpark",0,0,0,1,1);
  Activity.push_back(Terme);

}
