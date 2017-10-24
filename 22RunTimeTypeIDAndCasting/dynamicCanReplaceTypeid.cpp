#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<typeinfo>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//use dynamic_cast to replace typeid
using namespace std;

class Base{
public:
  virtual void f(){}
};

class Derived: public Base{
public:
  void derivedOnly(){
    cout<<"Is a Derived object.\n";
  }
};

int main(void)
{
  Base *bp,b_ob;
  Derived *dp,d_ob;
  //************************
  //use typeid
  //***********************
  bp=&b_ob;
  if(typeid(*bp)==typeid(Derived))
    {
    dp=(Derived *)bp;
    dp->derivedOnly();
    }
  else
    cout<<"cast from Base to Derived failed\n";

  bp=&d_ob;
  if(typeid(*bp)==typeid(Derived)){
    dp=(Derived *)bp;
    dp->derivedOnly();
  }
  else
    cout<<"error ,castt should work\n";

  //**********************************
  //use dynamic_cast
  //*********************************

  bp=&b_ob;
  dp=dynamic_cast<Derived *>(bp);
  if(dp)dp->derivedOnly();
  else
    cout<<"Cast from Base to derived\n";
  bp=&d_ob;
  dp=dynamic_cast<Derived *> (bp);
  if(dp) dp->derivedOnly();
  else
    cout<<"Error ,cast should work\n";
  
  
  return 1;
}
