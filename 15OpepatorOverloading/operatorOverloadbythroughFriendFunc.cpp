#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
class loc{
  int longitude,latitude;
public:
  loc(){}//needed to construct temporaries
  loc(int lg,int lt){
    longitude =lg;
    latitude=lt;
  }
  void show(){ cout<<longitude<<" "<<latitude<<endl;}
  friend  loc operator+(loc op1,loc op2);//now a friend
  loc operator-(loc op2);
  loc operator=(loc op2);
  loc operator++();
  loc operator+=(loc op2);
};
//now ,+ is overloaded using friend funcction
loc operator+(loc op1,loc op2)
{
  loc temp;
  temp.longitude=op1.longitude+op2.longitude;
  temp.latitude=op1.latitude+op2.latitude;
  return temp;
}
//overload - for loc
loc loc::operator-(loc op2)
{
  loc temp;
  //notice order of operands
  temp.longitude=longitude -op2.longitude;
  temp.latitude=latitude-op2.latitude;
  return temp;
}
//overload asgnment for loc.
loc loc::operator=(loc op2)
{
  longitude=op2.longitude;
  latitude=op2.latitude;
  return *this;//i.i. , return object that generated call
}
//overload perfix ++ for loc
loc loc::operator++()
{
  longitude++;
  latitude++;
  return *this;
}
//overload shorthand Operator += for loc
loc loc::operator+=(loc op2)
{
  longitude=op2.longitude+longitude;
  latitude=op2.latitude +latitude;
  return *this;
}

int main(void)
{
  loc ob1(10,20),ob2(5,30);
  ob1=ob1+ob2;
  ob1.show();
 
  return 0;
}
