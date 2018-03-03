
void vInput();
void vOutput(struct Activity);
void vInit(struct Activity);
void vFilter(struct Activity);

struct Activity
{
    char name[20];
    int status[4];
    int aktiv;
    int vLukas;
    int vJulia;
};

/*
    status[0]=Aktiv                //Done
    status[1]=Wetterkritisch
    status[2]=Temperaturkritisch  // Done
    status[3]=Tageskritisch      // Done
    status[4]=Tag
*/

//Input Variables
int aktiv;
int sonnig;
int warm;
int heute;
int sonntag;
int tage;

/*
Disskutiert:
- Tretbotfahren
- Kart fahren?
- Spieleabend

Tätigkeiten:
- Jumphouse
- Museum
- Serienmarathon/Doku gucken
- Zoo
- Freibad/see
- Therme/Rutschpark
- Kaffee
- Kino
- Kochen
- Shopping
- Zocken
- Wandertour
- Klettern
- Spielbar
- Hochseilgarten
- Freizeitpark
- Disco
- Bar
- Schlittschuh laufen
- Essen gehen
- Tierhandlung/Tierheim besuchen
- Grillen
- Stadtpark
- Zocken
- Lasertek
- Sport (Federball, Volleyball, Basketball)
- Besichtigung/Fotografie
- Blacklight Minigolf
- Spieleabend?

*/
