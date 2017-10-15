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
class balance{
  double cur_bal;
  char name[80];
public:
void set (double n,char *s){
    cur_bal=n;
    strcpy(name,s);
  }
  balance(){}//parameterless constructor
  ~balance(){
    cout<<"Destructing ";
    cout<<name<<endl;
  }
  void get_bal(double &n,char *s){
    n=cur_bal;
    strcpy(s,name);
  }
};
    
int main(void)
{
  balance *p;
  char s[80];
  double n;
  int i;
  try {
    p = new balance[3];//allocate entire array
  }catch(bad_alloc xa){
    cout<<"Allocation Failure"<<endl;
    return 1;
  }
  //note use of dot,not arrow operators
  p[0].set(12387.87,(char *)"Ralph Wilson");
  p[1].set(144.00,(char *)"A. C. Conners");
  p[2].set(-11.23,(char *)"I. M. Overdrawn");
  for(i=0;i<3;i++)
    {
  p[i].get_bal(n,s);
    cout<<s<<" 's balance is : "<<n;
      cout<<endl;
    }

  delete []  p;
  return 0;
}
