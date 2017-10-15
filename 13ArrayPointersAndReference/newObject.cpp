#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<cstring>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class balance {
  double cur_bal;
  char name[80];
public:
  void set(double n,char *s){
    cur_bal = n;
    strcpy(name,s);
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
  try{
    p=new balance;
  }catch(bad_alloc xa){
    cout<<"allocation Failure\n";
    return 1;
  }
  p->set(12387.87,(char *)"Ralph Wilson");

  p->get_bal(n,s);
  cout<<s<<" 's balance is :" <<n;
    cout<<endl;
  
  delete p;
  return 0;
}
