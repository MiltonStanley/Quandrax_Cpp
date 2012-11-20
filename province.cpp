//province.cpp

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "./include/province.h"

using namespace std;

Province::Province(int _oldID, int _newID, string _controller){
  oldID = _oldID;
	newID.push_back(_newID);
	controller = _controller;
}

void Province::newController(string _newController){
	controller = _newController;
}

void Province::debug(){
	cout << "<-- Start Province debugging! -->" << endl;
  cout << "Province " << oldID << " => ";
  for(unsigned int i=0; i<newID.size(); i++){
  int new_ID = newID[i];
  cout << new_ID;
  if(i<newID.size()-1) cout << ", ";
  }
  cout << endl;
  cout << "<--  End Province debugging!  -->" << endl;
}