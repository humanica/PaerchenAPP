#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <conio.h>

// Globale Variablen
int Sexlust;
int Tage;
int Sportlich;
int Sonnigwarm;
int Schwimmbadwetter;
int morgen,mittag,abend;
char Morgen[40],Mittag[40],Abend[40];

void vAbfrage();
void vInitialisierung();
void vFiltern();
void vAusgabe();
void vRandom();


struct Taetigkeiten{char Name[40];int Aktiv; int Wetterkritisch; int Tageskritisch;
                    int Eintragaktiv;int Abendonly;int Ganztaegig;int Schwimmbadwetter;
					int Vormittagonly;};


struct Taetigkeiten Speicher[100];

int irand( int a, int e)
{
    double r = e - a + 1;
    return a + (int)(r * rand()/(RAND_MAX+1.0));
}


int main(int argc, char *argv[]) {
	
	vAbfrage();
    vInitialisierung();
	if(Sexlust>5)Sexfunktion();
	
	// Anlegen der Variablen
        strcpy(Speicher[0].Name,"massieren");
	Speicher[0].Aktiv=0;
	Speicher[0].Tageskritisch=0;	
	Speicher[0].Eintragaktiv=1;
	Speicher[0].Abendonly=0;
	Speicher[0].Ganztaegig=0;
	Speicher[0].Schwimmbadwetter=0;
	Speicher[0].Vormittagonly=0;
	
	strcpy(Speicher[1].Name,"Museum besuchen");
	Speicher[1].Aktiv=1;
	Speicher[1].Tageskritisch=0;	
	Speicher[1].Eintragaktiv=1;
	Speicher[1].Abendonly=0;
	Speicher[1].Ganztaegig=0;
	Speicher[1].Schwimmbadwetter=0;
	Speicher[1].Vormittagonly=1;
	
	strcpy(Speicher[2].Name,"Billiard");
	Speicher[2].Aktiv=1;
	Speicher[2].Tageskritisch=0;	
	Speicher[2].Eintragaktiv=1;
	Speicher[2].Abendonly=1;
	Speicher[2].Ganztaegig=0;
	Speicher[2].Schwimmbadwetter=0;
	Speicher[2].Vormittagonly=0;
	
	strcpy(Speicher[3].Name,"Film gucken,Chips");
	Speicher[3].Aktiv=0;
	Speicher[3].Tageskritisch=0;	
	Speicher[3].Eintragaktiv=1;
	Speicher[3].Abendonly=1;
	Speicher[3].Ganztaegig=0;
	Speicher[3].Schwimmbadwetter=0;
	Speicher[3].Vormittagonly=0;
	
	strcpy(Speicher[4].Name,"Zoo");
	Speicher[4].Aktiv=1;
	Speicher[4].Tageskritisch=1;	
	Speicher[4].Eintragaktiv=1;
	Speicher[4].Abendonly=0;
	Speicher[4].Ganztaegig=0;
	Speicher[4].Schwimmbadwetter=0;
	Speicher[4].Vormittagonly=1;
	
	strcpy(Speicher[5].Name,"Schwimmbad");
	Speicher[5].Aktiv=1;
	Speicher[5].Tageskritisch=1;	
	Speicher[5].Eintragaktiv=1;
	Speicher[5].Abendonly=0;
	Speicher[5].Ganztaegig=0;
	Speicher[5].Schwimmbadwetter=1;
	Speicher[5].Vormittagonly=1;
	
	strcpy(Speicher[6].Name,"Ins Kaffee gehen");
	Speicher[6].Aktiv=1;
	Speicher[6].Tageskritisch=0;	
	Speicher[6].Eintragaktiv=1;
	Speicher[6].Abendonly=0;
	Speicher[6].Ganztaegig=0;
	Speicher[6].Schwimmbadwetter=0;
	Speicher[6].Vormittagonly=1;
	
	strcpy(Speicher[7].Name,"Kino");
	Speicher[7].Aktiv=0;
	Speicher[7].Tageskritisch=0;	
	Speicher[7].Eintragaktiv=1;
	Speicher[7].Abendonly=1;
	Speicher[7].Ganztaegig=0;
	Speicher[7].Schwimmbadwetter=0;
	Speicher[7].Vormittagonly=0;
	
	strcpy(Speicher[8].Name,"Spaziergang");
	Speicher[8].Aktiv=1;
	Speicher[8].Tageskritisch=1;	
	Speicher[8].Eintragaktiv=1;
	Speicher[8].Abendonly=0;
	Speicher[8].Ganztaegig=0;
	Speicher[8].Schwimmbadwetter=0;
	Speicher[8].Vormittagonly=0;
	
	strcpy(Speicher[9].Name,"Was neues im Kochbuch suchen");
	Speicher[9].Aktiv=0;
	Speicher[9].Tageskritisch=0;	
	Speicher[9].Eintragaktiv=1;
	Speicher[9].Abendonly=1;
	Speicher[9].Ganztaegig=0;
	Speicher[9].Schwimmbadwetter=0;
	Speicher[9].Vormittagonly=0;
	
	strcpy(Speicher[10].Name,"Shopping");
	Speicher[10].Aktiv=1;
	Speicher[10].Tageskritisch=1;	
	Speicher[10].Eintragaktiv=1;
	Speicher[10].Abendonly=0;
	Speicher[10].Ganztaegig=0;
	Speicher[10].Schwimmbadwetter=0;
	Speicher[10].Vormittagonly=1;
	
	strcpy(Speicher[11].Name,"Therme");
	Speicher[11].Aktiv=0;
	Speicher[11].Tageskritisch=0;	
	Speicher[11].Eintragaktiv=1;
	Speicher[11].Abendonly=0;
	Speicher[11].Ganztaegig=0;
	Speicher[11].Schwimmbadwetter=0;
	Speicher[11].Vormittagonly=1;
	
	strcpy(Speicher[12].Name,"Eis essen gehen");
	Speicher[12].Aktiv=0;
	Speicher[12].Tageskritisch=1;	
	Speicher[12].Eintragaktiv=1;
	Speicher[12].Abendonly=0;
	Speicher[12].Ganztaegig=0;
	Speicher[12].Schwimmbadwetter=0;
	Speicher[12].Vormittagonly=1;
	
	strcpy(Speicher[13].Name,"An den See fahren");
	Speicher[13].Aktiv=1;
	Speicher[13].Tageskritisch=1;	
	Speicher[13].Eintragaktiv=1;
	Speicher[13].Abendonly=0;
	Speicher[13].Ganztaegig=0;
	Speicher[13].Schwimmbadwetter=1;
	Speicher[13].Vormittagonly=1;
	
	strcpy(Speicher[14].Name,"Am PC/PS/XBOX zocken");
	Speicher[14].Aktiv=0;
	Speicher[14].Tageskritisch=0;	
	Speicher[14].Eintragaktiv=1;
	Speicher[14].Abendonly=0;
	Speicher[14].Ganztaegig=0;
	Speicher[14].Schwimmbadwetter=0;
	Speicher[14].Vormittagonly=0;
	
	strcpy(Speicher[15].Name,"Städtereise");
	Speicher[15].Aktiv=1;
	Speicher[15].Tageskritisch=1;	
	Speicher[15].Eintragaktiv=1;
	Speicher[15].Abendonly=0;
	Speicher[15].Ganztaegig=1;
	Speicher[15].Schwimmbadwetter=0;
	Speicher[15].Vormittagonly=0;
	
	strcpy(Speicher[16].Name,"Wandertour");
	Speicher[16].Aktiv=1;
	Speicher[16].Tageskritisch=1;	
	Speicher[16].Eintragaktiv=1;
	Speicher[16].Abendonly=0;
	Speicher[16].Ganztaegig=0;
	Speicher[16].Schwimmbadwetter=0;
	Speicher[16].Vormittagonly=1;
	
	strcpy(Speicher[17].Name,"hochseilgarten");
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
	Speicher[19].Eintragaktiv=1;
	Speicher[19].Abendonly=0;
	Speicher[19].Ganztaegig=0;
	Speicher[19].Schwimmbadwetter=0;
	Speicher[19].Vormittagonly=1;
	
	strcpy(Speicher[20].Name,"Minigolf spielen");
	Speicher[20].Aktiv=1;
	Speicher[20].Tageskritisch=1;	
	Speicher[20].Eintragaktiv=1;
	Speicher[20].Abendonly=0;
	Speicher[20].Ganztaegig=0;
	Speicher[20].Schwimmbadwetter=0;
	Speicher[20].Vormittagonly=1;
	
	strcpy(Speicher[21].Name,"Sternenhimmel anschauen/glühein trinken ");
	Speicher[21].Aktiv=0;
	Speicher[21].Tageskritisch=1;	
	Speicher[21].Eintragaktiv=1;
	Speicher[21].Abendonly=1;
	Speicher[21].Ganztaegig=0;
	Speicher[21].Schwimmbadwetter=0;
	Speicher[21].Vormittagonly=0;
	
	strcpy(Speicher[22].Name,"Tagesausflug Holland Strand");
	Speicher[22].Aktiv=1;
	Speicher[22].Tageskritisch=1;	
	Speicher[22].Eintragaktiv=1;
	Speicher[22].Abendonly=0;
	Speicher[22].Ganztaegig=1;
	Speicher[22].Schwimmbadwetter=0;
	Speicher[22].Vormittagonly=0;
	

	strcpy(Speicher[23].Name,"Segway Fahren");
	Speicher[23].Aktiv=1;
	Speicher[23].Tageskritisch=1;	
	Speicher[23].Eintragaktiv=1;
	Speicher[23].Abendonly=0;
	Speicher[23].Ganztaegig=1;
	Speicher[23].Schwimmbadwetter=0;
	Speicher[23].Vormittagonly=0;
	
	strcpy(Speicher[24].Name,"Zusammen russisch lernen");
	Speicher[24].Aktiv=0;
	Speicher[24].Tageskritisch=0;	
	Speicher[24].Eintragaktiv=1;
	Speicher[24].Abendonly=0;
	Speicher[24].Ganztaegig=0;
	Speicher[24].Schwimmbadwetter=0;
	Speicher[24].Vormittagonly=1;
	
	strcpy(Speicher[25].Name,"In die Disco gehen");
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
	
	strcpy(Speicher[27].Name,"zusammen baden");
	Speicher[27].Aktiv=0;
	Speicher[27].Tageskritisch=0;	
	Speicher[27].Eintragaktiv=1;
	Speicher[27].Abendonly=1;
	Speicher[27].Ganztaegig=0;
	Speicher[27].Schwimmbadwetter=0;
	Speicher[27].Vormittagonly=0;
	
	strcpy(Speicher[28].Name,"Grasmuffins backen");
	Speicher[28].Aktiv=0;
	Speicher[28].Tageskritisch=0;	
	Speicher[28].Eintragaktiv=1;
	Speicher[28].Abendonly=0;
	Speicher[28].Ganztaegig=1;
	Speicher[28].Schwimmbadwetter=0;
	Speicher[28].Vormittagonly=0;

        
        // Wenngleich aktiv, soll Sex eine Sonderstellung erhalten, also durch keine Variable als Tage geblockt werden
        strcpy(Speicher[29].Name,"Sex");
        Speicher[29].Eintragaktiv=1;
        Speicher[29].Abendonly=0;
        Speicher[29].Schwimmbadwetter=0;
        Speicher[29].Aktiv=0;
        Speicher[29].Vormittagonly=0;
        Speicher[29].Tageskritisch=1;


        strcpy(Speicher[30].Name,"Essen gehen");
        Speicher[30].Eintragaktiv=0;
        Speicher[30].Abendonly=0;
        Speicher[30].Schwimmbadwetter=0;
        Speicher[30].Aktiv=0;
        Speicher[30].Vormittagonly=0;
        Speicher[30].Tageskritisch=0;


        strcpy(Speicher[31].Name,"Neue Serie suchen& min 4 folgen gucken");
        Speicher[31].Eintragaktiv=0;
        Speicher[31].Abendonly=0;
        Speicher[31].Schwimmbadwetter=0;
        Speicher[31].Aktiv=0;
        Speicher[31].Vormittagonly=0;
        Speicher[31].Tageskritisch=0;

       
        strcpy(Speicher[32].Name,"Neue Serie suchen& min 4 folgen gucken");
        Speicher[32].Eintragaktiv=0;
        Speicher[32].Abendonly=0;
        Speicher[32].Schwimmbadwetter=0;
        Speicher[32].Aktiv=0;
        Speicher[32].Vormittagonly=0;
        Speicher[32].Tageskritisch=0;

         
        strcpy(Speicher[33].Name,"Tierhandlung besuchen");
        Speicher[33].Eintragaktiv=0;
        Speicher[33].Abendonly=0;
        Speicher[33].Schwimmbadwetter=0;
        Speicher[33].Aktiv=0;
        Speicher[33].Vormittagonly=1;
        Speicher[33].Tageskritisch=0;


        strcpy(Speicher[34].Name,"Grillen, frühshoppen");
        Speicher[34].Eintragaktiv=0;
        Speicher[34].Abendonly=0;
        Speicher[34].Schwimmbadwetter=0;
        Speicher[34].Aktiv=0;
        Speicher[34].Vormittagonly=1;
        Speicher[34].Tageskritisch=0;

 
        strcpy(Speicher[35].Name,"Spielhölle");
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


       
       

 
    vFiltern(); 
    vRandom();
    vAusgabe();
	getchar();
	return 0;
}


void vAbfrage()
{
	printf("Antworte auf die Abfrage und druecke anschliessend Enter\n");
	printf("Ist das Wetter schoen?(1-ja,0-nein)\n");
	scanf("%d",&Sonnigwarm);
	printf("Ist es Schwimmbadwetter?(1-ja,0-nein)\n");
	scanf("%d",&Schwimmbadwetter);
	printf("Hast du deine Tage?(1-ja,0-nein)\n");
	scanf("%d",&Tage);
	if(Tage==0)
	{
		printf("Wieviel Lust hast du auf Sex?(1-10)\n");
	    scanf("%d",&Sexlust);
	}
	printf("Bist du heute aktiv oder faul?(1-aktiv,0-faul)\n");
	scanf("%d",&Sportlich);
}

void vInitialisierung()
{   
    int i=0;
	for(i=0;i<100;i++)
   {
   	strcpy(Speicher[i].Name,"");
	Speicher[i].Aktiv=0;
	Speicher[i].Tageskritisch=0;	
	Speicher[i].Eintragaktiv=0;
	Speicher[i].Abendonly=0;
	Speicher[i].Ganztaegig=0;
	Speicher[i].Schwimmbadwetter=0;
   }
}

// setzt nicht gesetzt oder unpassende Einträge auf Inaktiv
void vFiltern()
{
	int i=0;
	for(i=0;i<100;i++)
	{
	if(Tage==1&&Speicher[i].Tageskritisch==1)Speicher[i].Eintragaktiv=0;
	if(Sonnigwarm==0&&Speicher[i].Wetterkritisch==1)Speicher[i].Eintragaktiv=0;
	}
}

 // Sucht eine Passende Tätigkeit aus 
void vRandom()
{    
    int a;
	for(a=0;a<100;a++)
	{
    int leave1,leave2,leave3;
    int status=1;
	int zahl;
    zahl = irand(0,99) ;
    if(Speicher[zahl].Eintragaktiv==1)
    {
    	if(Speicher[zahl].Ganztaegig==1)
		    {
    		 printf("Ganztaegiger Ausflug: %s",Speicher[zahl].Name);
    		 getchar();
    		 getchar();
    	    }
    	else if(Speicher[zahl].Abendonly==1){strcpy(Speicher[zahl].Name,Abend);leave1=1;}
    	else if(Speicher[zahl].Vormittagonly==1)
		    {
		    if(status=0){strcpy(Speicher[zahl].Name,Mittag);leave2=1;}
		    if(status=1){strcpy(Speicher[zahl].Name,Morgen);status=0;leave3=1;};
		    }
    } 
    if(Sexlust>5){strcpy(Speicher[29].Name,Morgen);}
	// Terminiert erst, wenn für Morgen,Mittag und Abend eine Tätigkeit gefunden wurde
    if(leave1==1&&leave2==1&&leave3==1)break;	
    }
}
	
	


void vAusgabe()
{
	int i;
	printf("Die Optimierte Tagesplanung lautet : \n");
	for (i=0; i<39; i++)
   {
   printf("%s",Morgen[i]);
   }
	printf("Morgens : %s \n",Morgen);
	printf("Mittags : %s \n",Mittag);
	printf("Abends : %s \n",Abend);
}



/*  Ideen:


        1. Einige der Vorschläge sind sehr ausgefallen, es sollte eine weitere Variable geben die besondere Ausflüge kennzeichnet, zb Segway
           fahren oder eine Stadtetour. Solche dinge müssen länger geplant sein und erfordern viel Geld 

        2. 


*/









