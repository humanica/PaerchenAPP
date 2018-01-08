
void vInput();
void vOutput(struct Activity);
void vInit(struct Activity);   
void vFilter(struct Activity);

struct Activity
{
    char name[20];
    int status[9];
};

/*  
    status[0]=Aktiv
    status[1]=Wetterkritisch
    status[2]=Temperaturkritisch
    status[3]=Tageskritisch
    status[4]=Vorbereitungskritisch
    status[5]=Abendonly
    status[6]=Tag
    status[7]=Abend
    status[8]=Sonntag
    status[9]=Eintrag Aktiv
    0 = Jeder Tag   1 = Nur Sonntag   2 = Sonntags nicht
*/

//Input Variables
int aktiv;
int sonnig;
int warm;
int heute;
int sonntag;
int tage;


