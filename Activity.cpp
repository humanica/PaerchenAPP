#include "Activity.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

activity::activity(void){
  this->p_alive = 1;
  this->p_aktiv = 0;
  this->p_wetterKritisch = 0;
  this->p_temperaturKritisch = 0;
  this->p_tagesKritisch = 0;
  this->p_tag = 0;
}

activity::activity(string name, int aktiv, int wetterkritisch,
                   int temperaturKritisch, int tagesKritisch, int tag){
  p_alive = 1;
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

int activity::getalive(void){
  return p_alive;
}

void activity::setalive(int alive){
  p_alive = alive;
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
