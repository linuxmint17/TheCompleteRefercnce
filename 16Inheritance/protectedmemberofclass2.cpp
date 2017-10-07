#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;

class base{
protected:
  int i,j;//private to base ,bu accessiable to derived
public:
  void set(int a,int b){i=a;j=b;}
  void show(){cout<<i<<" "<<j<<endl;}
};
class derived1 :public base{
  int k;
public:
  //derived may access i and j
  void setk(){k=i*j;}
  void showk(){cout<<k<<endl;}
};

//i and j are inherited indirected through derived
class derived2 : public derived1{
  int m;
public:
  void setm(){m=i-j;}//legal
  void showm(){cout<<m<<endl;}
};
int main(void)
{
  derived1 ob1;
  derived2 ob2;
  
  ob1.set(2,3);//ok nkown to derived1
  ob1.show();// ok,known to derived1

  ob1.setk();
  ob1.showk();

  ob2.set(3,4);
  ob2.show();
  ob2.setk();
  ob2.setm();
  ob2.showk();
  ob2.showm();
  
  return 0;
}
