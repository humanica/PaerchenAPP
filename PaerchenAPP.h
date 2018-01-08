void vAbfrage();
void vInitialisierung();
void vFiltern();
void vAusgabe();
void vRandom();
void vAddTaetigkeit(char,int *);


/*
Weitere Entscheidungsparameter:
- Nicht nur Regen/nicht regen sondern auch Temperatur entscheident
- Viele Dinge gehen Sonntags nicht bzw nur Sonntags
*/


struct Taetigkeiten
{
    char Name[40];
	int Status[20];
	/*
	int aktiv;
    int Wetterkritisch;
	int Temperaturkritisch;
    int Tageskritisch;
    int Eintragaktiv;
    int Abendonly;
    int Ganztaegig;
    int Vormittagonly;
	int Vorbereitung;
	int Sonntag;
	0 = Jeder Tag   1 = Nur Sonntag   2 = Sonntags nicht
	*/
};
/*
Weitere Tätigkeiten:
- Sport? Federball
- Paintball?
- Tretbotfahren

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
- Lasertek
- Sport (Federball, Volleyball, Basketball)
- Besichtigung/Fotografie
- Blacklight Minigolf
- Spieleabend?
- Kart fahren?
*/




struct Taetigkeiten Speicher[100];


// Anlegen der Variablen

strcpy(Speicher[0].Name,"Museum");
Speicher[0].Tageskritisch=0;
Speicher[0].Eintragaktiv=1;
Speicher[0].Abendonly=0;
Speicher[0].Ganztaegig=0;
Speicher[0].Schwimmbadwetter=0;
Speicher[0].Vormittagonly=1;

strcpy(Speicher[3].Name,"Serienmarathon");
Speicher[3].Tageskritisch=0;
Speicher[3].Eintragaktiv=1;
Speicher[3].Abendonly=1;
Speicher[3].Ganztaegig=0;
Speicher[3].Schwimmbadwetter=0;
Speicher[3].Vormittagonly=0;

strcpy(Speicher[4].Name,"Zoo");
Speicher[4].Tageskritisch=1;
Speicher[4].Eintragaktiv=1;
Speicher[4].Abendonly=0;
Speicher[4].Ganztaegig=0;
Speicher[4].Schwimmbadwetter=0;
Speicher[4].Vormittagonly=1;

strcpy(Speicher[5].Name,"Freibad/See");
Speicher[5].Tageskritisch=1;
Speicher[5].Eintragaktiv=1;
Speicher[5].Abendonly=0;
Speicher[5].Ganztaegig=0;
Speicher[5].Schwimmbadwetter=1;
Speicher[5].Vormittagonly=1;

strcpy(Speicher[0].Name,"Therme/Rutschpark");
Speicher[0].Tageskritisch=1;
Speicher[0].Eintragaktiv=1;
Speicher[0].Abendonly=0;
Speicher[0].Ganztaegig=0;
Speicher[0].Schwimmbadwetter=1;
Speicher[0].Vormittagonly=1;

strcpy(Speicher[6].Name,"Kaffee");
Speicher[6].Tageskritisch=0;
Speicher[6].Eintragaktiv=1;
Speicher[6].Abendonly=0;
Speicher[6].Ganztaegig=0;
Speicher[6].Schwimmbadwetter=0;
Speicher[6].Vormittagonly=1;

strcpy(Speicher[7].Name,"Kino");
Speicher[7].Tageskritisch=0;
Speicher[7].Eintragaktiv=1;
Speicher[7].Abendonly=1;
Speicher[7].Ganztaegig=0;
Speicher[7].Schwimmbadwetter=0;
Speicher[7].Vormittagonly=0;

strcpy(Speicher[9].Name,"Kochen");
Speicher[9].Tageskritisch=0;
Speicher[9].Eintragaktiv=1;
Speicher[9].Abendonly=1;
Speicher[9].Ganztaegig=0;
Speicher[9].Schwimmbadwetter=0;
Speicher[9].Vormittagonly=0;

strcpy(Speicher[10].Name,"Shopping");
Speicher[10].Tageskritisch=1;
Speicher[10].Eintragaktiv=1;
Speicher[10].Abendonly=0;
Speicher[10].Ganztaegig=0;
Speicher[10].Schwimmbadwetter=0;
Speicher[10].Vormittagonly=1;

strcpy(Speicher[14].Name,"Zocken");
Speicher[14].Aktiv=0;
Speicher[14].Tageskritisch=0;
Speicher[14].Eintragaktiv=1;
Speicher[14].Abendonly=0;
Speicher[14].Ganztaegig=0;
Speicher[14].Schwimmbadwetter=0;
Speicher[14].Vormittagonly=0;

strcpy(Speicher[16].Name,"Wandertour");
Speicher[16].Aktiv=1;
Speicher[16].Tageskritisch=1;
Speicher[16].Eintragaktiv=1;
Speicher[16].Abendonly=0;
Speicher[16].Ganztaegig=0;
Speicher[16].Schwimmbadwetter=0;
Speicher[16].Vormittagonly=1;

strcpy(Speicher[17].Name,"Hochseilgarten");
Speicher[17].Aktiv=1;
Speicher[17].Tageskritisch=1;
Speicher[17].Eintragaktiv=1;
Speicher[17].Abendonly=0;
Speicher[17].Ganztaegig=1;
Speicher[17].Schwimmbadwetter=0;
Speicher[17].Vormittagonly=0;

strcpy(Speicher[18].Name,"Freizeitpark und kiffen");
Speicher[18].Aktiv=1;
Speicher[18].Tageskritisch=1;
Speicher[18].Eintragaktiv=1;
Speicher[18].Abendonly=0;
Speicher[18].Ganztaegig=1;
Speicher[18].Schwimmbadwetter=0;
Speicher[18].Vormittagonly=0;

strcpy(Speicher[19].Name,"Schlittschuh laufen");
Speicher[19].Aktiv=1;
Speicher[19].Tageskritisch=0;
Speicher[19].EintragaktivHochseilgarten=1;
Speicher[19].Abendonly=0;
Speicher[19].Ganztaegig=0;
Speicher[19].Schwimmbadwetter=0;
Speicher[19].Vormittagonly=1;

strcpy(Speicher[20].Name,"Spielebar");
Speicher[20].Aktiv=1;
Speicher[20].Tageskritisch=1;
Speicher[20].Eintragaktiv=1;
Speicher[20].Abendonly=0;
Speicher[20].Ganztaegig=0;
Speicher[20].Schwimmbadwetter=0;
Speicher[20].Vormittagonly=1;

strcpy(Speicher[21].Name,"Sternenhimmel anschauen/gl�hein trinken ");
Speicher[21].Aktiv=0;
Speicher[21].Tageskritisch=1;
Speicher[21].Eintragaktiv=1;
Speicher[21].Abendonly=1;
Speicher[21].Ganztaegig=0;
Speicher[21].Schwimmbadwetter=0;
Speicher[21].Vormittagonly=0;

strcpy(Speicher[25].Name,"Disco");
Speicher[25].Aktiv=1;
Speicher[25].Tageskritisch=0;
Speicher[25].Eintragaktiv=1;
Speicher[25].Abendonly=1;
Speicher[25].Ganztaegig=0;
Speicher[25].Schwimmbadwetter=0;
Speicher[25].Vormittagonly=0;

strcpy(Speicher[26].Name,"Picknick");
Speicher[26].Aktiv=0;
Speicher[26].Tageskritisch=1;
Speicher[26].Eintragaktiv=1;
Speicher[26].Abendonly=0;
Speicher[26].Ganztaegig=0;
Speicher[26].Schwimmbadwetter=0;
Speicher[26].Vormittagonly=1;

strcpy(Speicher[30].Name,"Essen gehen");
Speicher[30].Eintragaktiv=0;
Speicher[30].Abendonly=0;
Speicher[30].Schwimmbadwetter=0;
Speicher[30].Aktiv=0;
Speicher[30].Vormittagonly=0;
Speicher[30].Tageskritisch=0;

strcpy(Speicher[33].Name,"Tierhandlung besuchen");
Speicher[33].Eintragaktiv=0;
Speicher[33].Abendonly=0;
Speicher[33].Schwimmbadwetter=0;
Speicher[33].Aktiv=0;
Speicher[33].Vormittagonly=1;
Speicher[33].Tageskritisch=0;

strcpy(Speicher[34].Name,"Grillen, fr�hshoppen");
Speicher[34].Eintragaktiv=0;
Speicher[34].Abendonly=0;
Speicher[34].Schwimmbadwetter=0;
Speicher[34].Aktiv=0;
Speicher[34].Vormittagonly=1;
Speicher[34].Tageskritisch=0;

strcpy(Speicher[35].Name,"Spielh�lle");
Speicher[35].Eintragaktiv=0;
Speicher[35].Abendonly=1;
Speicher[35].Schwimmbadwetter=0;
Speicher[35].Aktiv=0;
Speicher[35].Vormittagonly=0;
Speicher[35].Tageskritisch=0;

strcpy(Speicher[35].Name,"gemeinsam Sport treiben");
Speicher[35].Eintragaktiv=0;
Speicher[35].Abendonly=0;
Speicher[35].Schwimmbadwetter=0;
Speicher[35].Aktiv=1;
Speicher[35].Vormittagonly=0;
Speicher[35].Tageskritisch=0;
