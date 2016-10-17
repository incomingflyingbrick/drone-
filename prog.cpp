#include <iostream>
#include "AP_DRONE.h"

using namespace std;

class Area{
public:
    int witdh=10;
    int height=20;

    Area(int a,int b){
        witdh = a;
        height = b;
    }


    void printArea(){
        cout<<witdh*height<<"\n";
        cout<<area_name<<"\n";
    }

private:
    string area_name="This is my name";
};






int main(int argc, char const *argv[]) {

  AP_DRONE myDrone;
  myDrone.setName("Such a cool name!");
  cout<<myDrone.getName()<<endl;
  cout<<"Success End"<<endl;
  return 0;

}
