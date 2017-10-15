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
  balance (double n,char *s){
    cur_bal=n;
    strcpy(name,s);
  }
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
  try {
    p = new balance (12387.87,(char *)"Ralph Wilson");
  }catch(bad_alloc xa){
    cout<<"Allocation Failure"<<endl;
    return 1;
  }
  p->get_bal(n,s);

  cout<<s<<" 's balance is : "<<n;
  cout<<endl;

  delete p;
  return 0;
}
