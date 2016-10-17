#include <iostream>
#include "AP_DRONE.h"
using namespace std;

void AP_DRONE::printf(){
    cout<<"ID:"<<id<<" name"<<name<<endl;
}

void AP_DRONE::setId(int ids){
    id = ids;
}

void AP_DRONE::setName(string droneName){
    name = droneName;
}

int AP_DRONE::getId(){
    return id;
}

string AP_DRONE::getName(){
    return name;
}
