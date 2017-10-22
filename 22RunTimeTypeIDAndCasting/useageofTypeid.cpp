#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<typeinfo>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
class Mammal{
public:
  virtual bool lays_eggs(){return false;}//Mammal is polymorphic
  // if comment the up line , the typeid  of pointer from base class
  //convert to  the derived class will be 
  //...
};
class Cat: public Mammal{
public:
  //...
};
class Platypus:public Mammal{
public:
  bool lays_eggs(){return true;}
  //...
};
int main(void)
{
  Mammal *p,AnyMammal;
  Cat cat;
  Platypus platypus;

  p=&AnyMammal;
  cout<<"p is poingting to an object of type ";
  cout<<typeid(*p).name()<<endl;
  
  p=&cat;
  cout<<"P is pointing to an object of type ";
  cout <<typeid(*p).name()<<endl;

  p=&platypus;
  cout<<"P is pointing to an object of type ";
  cout <<typeid(*p).name()<<endl;
  
  
  return 1;
}
