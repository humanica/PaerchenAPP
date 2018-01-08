/*  
Ideen: 

- Viele der Dinge brauchen vorbereitung am Vortag, zb kochen an einem Sonntag oder in die Disco gehen.
Zudem muss Julia am Wochenende oft arbeiten. Das Skript sollte also bestenfalls für die Zukunft planen
können.
- Sexaktiv sollte indirekt einfließen, es sollte keinen Tagesslot erhalten aber die Auswahl
von zb vom Serienmarathon gegenüber der Spielhalle erhöhen
- Vieles kann automatisiert werden (Wetterabfrage)
- Aktive Eintragungen sollten möglich sein, zb Freitag Abend Anika 
- Das ganze könnte  ich ggf für mich persönlich umbauen

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "/home/humanica/Programming/Privat/PaerchenAPP/PaerchenAPP.cpp"

int irand( int a, int e)
{
    double r = e - a + 1;
    return a + (int)(r * rand()/(RAND_MAX+1.0));
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

void vFiltern()
{
	int i=0;
	for(i=0;i<100;i++)
	{
	if(Tage==1&&Speicher[i].Tageskritisch==1)Speicher[i].Eintragaktiv=0;
	if(Sonnigwarm==0&&Speicher[i].Wetterkritisch==1)Speicher[i].Eintragaktiv=0;
	}
}

void vRandom();

{
    int a;
	for(a=0;a<100;a++)
	 {int leave1,leave2,leave3;
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
	// Terminiert erst, wenn f�r Morgen,Mittag und Abend eine T�tigkeit gefunden wurde
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

void vAddTaetigkeit(char name, int Status[], int n_Anzahl)
{
    for(i=0;i<n_Anzahl;i++)
    {

    }

}

int main(int argc, char *argv[]) {
  vAddTaetigkeit()
	return 0;
}
