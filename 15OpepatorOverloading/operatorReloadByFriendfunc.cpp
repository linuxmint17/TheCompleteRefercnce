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


  loc operator=(loc op2);
friend  loc operator++(loc &op);
friend  loc operator--(loc &op);
};
//overload asgnment for loc.
loc loc::operator=(loc op2)
{
  longitude=op2.longitude;
  latitude=op2.latitude;
  return *this;//i.e. , return object that generated call
}
//make op++ a friend;use reference
loc operator++(loc &op)
{
  op.longitude++;
   op.latitude++;
  return op;
}
//make op-- a friend;use reference
loc operator--(loc &op)
{
  op.longitude--;
  op.latitude--;
  return op;
}

int main(void)
{
  loc ob1(10,20),ob2;
   ob1.show();
   ++ob1;
   ob1.show();//display 11 21
   
   ob2=++ob1;
   ob2.show();//display 12 22
   
   --ob2;
   ob2.show();//display 11 21
 
  return 0;
}
