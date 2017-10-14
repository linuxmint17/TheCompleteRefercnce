#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class pwr{
  double b;
  int e;
  double val;
public:
  double get_pwr(){return val;}
  pwr(double base,int exp);
};
  pwr::pwr(double base,int exp)
  {
    b=base;
    e=exp;
    val=1;
    if(exp==0) return ;
    for(;exp>0;exp--) val*=b;
  }
int main(void)
{
  pwr x(4.0,2),y(2.5,1),z(5.7,0);
  cout<<x.get_pwr()<<" ";
  cout<<y.get_pwr()<<"  ";
  cout<<z.get_pwr()<<endl;
  
  return 0;
}
// No.1 friend function are not members of a class and therefore ,are not passed a this pointer
//No.2 static member functions do not have a this pointer
