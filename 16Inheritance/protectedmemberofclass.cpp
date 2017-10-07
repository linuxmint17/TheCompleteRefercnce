#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//When a member of a class is declared as protected, that  member is not accessible by other
//, nonmember elements of the program. With one  important exception, access to a protected member
//is the same as access to a private  member—it can be accessed only by other members of its class.
//The sole exception to  this is when a protected member is inherited
//If the base class is inherited as public, then  the base class' protected members become
//protected members of the derived class and are, therefore, accessible by the derived class
class base{
protected:
  int i,j;//private to base ,bu accessiable to derived
public:
  void set(int a,int b){i=a;j=b;}
  void show(){cout<<i<<" "<<j<<endl;}
};
class derived :public base{
  int k;
public:
  //derived may access i and j
  void setk(){k=i*j;}
  void showk(){cout<<k<<endl;}
};


int main(void)
{
  derived ob;
  ob.set(2,3);//ok nkown to derived
  ob.show();// ok,known to derived

  ob.setk();
  ob.showk();
  
  return 0;
}
