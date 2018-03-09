#include "Activity.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

activity::activity(void){
  p_aktiv = 0;
  p_wetterKritisch = 0;
  p_temperaturKritisch = 0;
  p_tagesKritisch = 0;
  p_tag = 0;
}

activity::activity(string name, int aktiv, int wetterkritisch,
                   int temperaturKritisch, int tagesKritisch, int tag){
  p_name=name;
  p_aktiv = aktiv;
  p_wetterKritisch = wetterkritisch;
  p_temperaturKritisch = temperaturKritisch;
  p_temperaturKritisch = tagesKritisch;
  p_tag = tag;
}

activity::~activity(void){
}

string activity::getname() const{
  return p_name;
}

int activity::getaktiv(void){
  return p_wetterKritisch;
}

int activity::getwetterKritisch(void){
  return p_wetterKritisch;
}

int activity::gettemperaturKritisch(void){
  return p_temperaturKritisch;
}

int activity::gettagesKritisch(void){
  return p_tagesKritisch;
}

int activity::gettag(void){
  return p_tag;
}
