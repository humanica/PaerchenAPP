#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "/home/humanica/Programming/Privat/PaerchenAPP/Activityfinder.h"
#define LIMIT 40

void vInput()
{
    /*
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
    */
    sonnig=1;
    aktiv=0;
    warm=0;
    heute=1;
    sonntag=0;
    tage=0;
}

/*  
    status[0]=Aktiv
    status[1]=Wetterkritisch
    status[2]=Temperaturkritisch
    status[3]=Tageskritisch
    status[4]=Vorbereitungskritisch
    status[5]=Tag
    status[6]=Abend
    status[7]=Sonntag
    status[8]=Eintrag Aktiv
    0 = Jeder Tag   1 = Nur Sonntag   2 = Sonntags nicht
*/
void vInit(struct Activity activity[])
{
    vInput();
    for(int i=0;i<LIMIT;i++)
    {
        strcpy(activity[i].name,"");
        for(int j=0;j<9;j++)
        {
            activity[i].status[j]=0;
        }
    }

    strcpy(activity[0].name,"Museum");
    int tmp0[9]={0,0,0,0,0,1,0,0,1};
    for(int i=0;i<9;i++){activity[0].status[i]=tmp0[i];}

}

void vFilter(struct Activity activity[])
{

}

void vOutput(struct Activity activity[])
{   
    for(int i=0;i<LIMIT;i++)
    {
        if(activity[i].status[8]==1)
        {
            printf("Aktivität: %s \n",activity[i].name);
        }
    }
}

int main(int argc, char *argv[]) {
    struct Activity activity[LIMIT];
    vInit(activity);
    vFilter(activity);
    vOutput(activity);
	return 0;
}


