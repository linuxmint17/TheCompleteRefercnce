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
class convert{
protected:
  double val1;//initial value
  double val2;//converted value
public:
  convert(double i){ val1=i;}
  double getconv(){ return val2;}
  double getinit(){return val1;}

  virtual void compute()=0;
};
//Liters to gallons.
  class l2g:public convert{
  public:
    l2g(double i):convert(i){}
    void compute() {val2=val1/3.7854;}
  };
//Fahrenheit to Celsius
class f2c:public convert{
public:
  f2c(double i):convert(i){}
    void  compute(){ val2=(val1-32)/1.8;}
  };
int main(void)
{
  convert *p;//pointer to base clases
  l2g lgob(4);
  f2c fcob(70);
  //use virtual function mechanism to convert
  p=&lgob;
  cout<<p->getinit()<<"liter is ";
  p->compute();
  cout<<p->getconv()<<"gallons \n";//l2g

  p=&fcob;
  cout<<p->getinit()<<"in Fahrenheit  is ";
  p->compute();
  cout<<p->getconv()<<"Celsius \n";//f2c
  
  return 1;
}
