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
//and operator->() function must bbe a member of the class up on which it works
class myclass{
public:
  int i;
  myclass *operator->(){return this;}
};
 int main(void)
{
  myclass ob;
  ob->i=10;//same as ob.i;
  cout<<ob.i<<" "<<ob->i;
  
  return 1;
}
