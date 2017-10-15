#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//use a reference parameter
void neg(int &i);//i now a reference
int main(void)
{
  int x;
  x=10;
  cout<<x<<" negated is ";
  neg(x);//no longer need the & operator
  cout<<x <<endl;
  
  return 0;
}
void neg(int &i)
{
  i=-i;
}
//A reference is essentially an implicit pointer .There are three ways that
//a reference can be used:
//No.1 as a function parameter
//No.2 as a function return value,
//No.3 as a stan-alone reference
//Inside the function ,it is not possible to change what the reference
// is pointing to .
