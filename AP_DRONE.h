
#ifndef AP_DRONE_H
#define AP_DRONE_H

using namespace std;

class AP_DRONE{
private:
  int id;
  string name;
public:
  //setter
  void setId(int);
  void setName(string);
  //getter
  int getId();
  string getName();

  void printf();
};

#endif
