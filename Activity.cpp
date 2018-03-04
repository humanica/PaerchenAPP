#include "Activity.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector.h>

activity::activity{
  sportlich = 0;
  wetterkritisch = 0;
  temperaturkritisch = 0;
  tageskritisch = 0;
  tag = 0;
}

activity::activity(char name, int aktiv, int wetterkrtisch, int temperaturKritisch,
                   int tagesKritisch, int tag){
  p_name=name;
  p_aktiv=aktiv;
  p_wetterKritisch=Wetterkritisch;
  p_temperaturKritisch=temperaturKritisch;
  p_temperaturKritisch=TagesKritisch;
  p_tag=tag;
}

activity::~activity{
}

activity::getname(){
  return p_name;
}

getaktiv(){
  return p_wetterKritisch;
}

getwetterKritisch(){
  return p_wetterKritisch;
}

gettemperaturKritisch(){
  return p_temperaturKritisch;
}

gettagesKritisch(){
  return p_tagesKritisch;
}

gettag(){
  return p_tag;
}
