#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "/home/humanica/Programming/Privat/PaerchenAPP/Activityfinder.h"
#define LIMIT 40
#define USED 28

void vInput()
{
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
}

void vInit(struct Activity activity[])
{
    vInput();
    for(int i=0;i<LIMIT;i++)
    {
        strcpy(activity[i].name,"");
        for(int j=0;j<4;j++)
        {
            activity[i].status[j]=0;
        }
        activity[i].aktiv=1;
    }

    strcpy(activity[0].name,"Museum");
    int tmp0[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[0].status[i]=tmp0[i];}

    strcpy(activity[1].name,"Jumphouse");
    int tmp1[5]={1,0,0,1,1};
    for(int i=0;i<5;i++){activity[1].status[i]=tmp1[i];}

    strcpy(activity[2].name,"Serienmarathon/Doku");
    int tmp2[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[2].status[i]=tmp2[i];}

    strcpy(activity[3].name,"Zoo");
    int tmp3[5]={0,1,1,0,1};
    for(int i=0;i<5;i++){activity[3].status[i]=tmp3[i];}

    strcpy(activity[4].name,"Freibad/See");
    int tmp4[5]={1,1,1,1,1};
    for(int i=0;i<5;i++){activity[4].status[i]=tmp4[i];}

    strcpy(activity[5].name,"Kaffee/Tee trinken gehen");
    int tmp5[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[5].status[i]=tmp5[i];}

    strcpy(activity[6].name,"Kino");
    int tmp6[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[6].status[i]=tmp6[i];}

    strcpy(activity[7].name,"Kochen");
    int tmp7[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[7].status[i]=tmp7[i];}

    strcpy(activity[8].name,"Shopping");
    int tmp8[5]={0,0,0,0,1};
    for(int i=0;i<5;i++){activity[8].status[i]=tmp8[i];}

    strcpy(activity[9].name,"Wandertour");
    int tmp9[5]={1,1,0,0,1};
    for(int i=0;i<5;i++){activity[9].status[i]=tmp9[i];}

    strcpy(activity[10].name,"Klettern");
    int tmp10[5]={1,0,0,0,1};
    for(int i=0;i<5;i++){activity[10].status[i]=tmp10[i];}

    strcpy(activity[11].name,"Spielbar");
    int tmp11[5]={0,0,0,0,1};
    for(int i=0;i<5;i++){activity[11].status[i]=tmp11[i];}

    strcpy(activity[12].name,"Hochseilgarten");
    int tmp12[5]={1,1,0,0,1};
    for(int i=0;i<5;i++){activity[12].status[i]=tmp12[i];}

    strcpy(activity[13].name,"Freizeitpark");
    int tmp13[5]={0,1,0,0,1};
    for(int i=0;i<5;i++){activity[13].status[i]=tmp13[i];}

    strcpy(activity[14].name,"Disco");
    int tmp14[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[14].status[i]=tmp14[i];}

    strcpy(activity[15].name,"Bar");
    int tmp15[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[15].status[i]=tmp15[i];}

    strcpy(activity[16].name,"Schlittschuh fahren");
    int tmp16[5]={1,0,2,0,1};
    for(int i=0;i<5;i++){activity[16].status[i]=tmp16[i];}

    strcpy(activity[17].name,"Essen gehen");
    int tmp17[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[17].status[i]=tmp17[i];}

    strcpy(activity[18].name,"Tierhandlung besuchen");
    int tmp18[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[18].status[i]=tmp18[i];}

    strcpy(activity[19].name,"Grillen");
    int tmp19[5]={0,1,0,0,0};
    for(int i=0;i<5;i++){activity[19].status[i]=tmp19[i];}

    strcpy(activity[20].name,"Stadtpark");
    int tmp20[5]={0,1,0,0,0};
    for(int i=0;i<5;i++){activity[20].status[i]=tmp20[i];}

    strcpy(activity[21].name,"Lasertek");
    int tmp21[5]={1,0,0,0,1};
    for(int i=0;i<5;i++){activity[21].status[i]=tmp21[i];}

    strcpy(activity[22].name,"Sport (Federball,Volleyball,Basketball)");
    int tmp22[5]={1,0,0,0,0};
    for(int i=0;i<5;i++){activity[22].status[i]=tmp22[i];}

    strcpy(activity[23].name,"Besichtigung/Fotografie");
    int tmp23[5]={0,1,0,0,1};
    for(int i=0;i<5;i++){activity[23].status[i]=tmp23[i];}

    strcpy(activity[24].name,"Zocken");
    int tmp24[5]={0,0,0,0,0};
    for(int i=0;i<5;i++){activity[24].status[i]=tmp24[i];}

    strcpy(activity[25].name,"Wandertour");
    int tmp25[5]={0,1,0,0,0};
    for(int i=0;i<5;i++){activity[25].status[i]=tmp25[i];}

    strcpy(activity[26].name,"Blacklight Minigolf");
    int tmp26[5]={0,1,0,0,0};
    for(int i=0;i<5;i++){activity[26].status[i]=tmp26[i];}

    strcpy(activity[27].name,"Terme/Rutschpark");
    int tmp27[5]={0,0,0,1,1};
    for(int i=0;i<5;i++){activity[27].status[i]=tmp27[i];}
}

void vFilter(struct Activity activity[])
{
    int i=0;
    for(i=0;i<LIMIT;i++)
    {
        if((aktiv==0)&&activity[i].status[0]==1)activity[i].aktiv=0;
        if((activity[i].status[3]==1)&&(tage==1))activity[i].aktiv=0;
        if((activity[i].status[2]==1)&&(warm==0))activity[i].aktiv=0;
        if((activity[i].status[1]==1)&&(sonnig==0))activity[i].aktiv=0;
    }
}

void vOutput(struct Activity activity[])
{
    for(int i=0;i<USED;i++)
    {
        if(activity[i].aktiv==1)
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
