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

class Base{
public:
  virtual void f(){cout<<"inside Base\n";}
  //...
};
class Derived:public Base{
public:
  void f(){cout <<"inside Derived\n";}
};
  
int main(void)
{
  Base *bp,b_ob;
  Derived *dp,d_ob;
  dp=dynamic_cast<Derived *>(&d_ob);
  if(dp){
    cout<<"Cast from Derived * to Derived * ,OK\n";
    dp->f();
  }
  else
    cout<<"Error\n";

  cout<<endl;
  bp=dynamic_cast<Base *> (&d_ob);
  if(bp){
    cout<<"cast from Derived * to Base *,OK\n";
    bp->f();
  }
  else
    cout<<endl;
  bp=dynamic_cast<Base *>(&b_ob);
  if(bp){
    cout<<"Cast from Base * to Base *,OK\n";
    bp->f();
  }else
    cout<<"Error\n";
  cout<<endl;


dp=dynamic_cast<Derived *> (&b_ob);
if(dp)
  cout<<"Error\n";
else
  cout<<"Cast from Base * from Derived * not OK.\n";
cout<<endl;
     dp=&d_ob;//bp points to Derived object
	      if(dp){
		cout<<"casting bp to Derived * ok\n";
		cout<<"because bp is really pointing to"<<
		  "to a Derived class object.\n";
		  dp->f();
	      }else
		cout<<"Error\n";
		      cout<<endl;

  return 1;
}
