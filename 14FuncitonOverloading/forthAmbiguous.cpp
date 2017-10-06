#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//Remember, there is no syntactical difference in the way that an argument is specified when it will
//be received by a reference parameter or by a value parameter.
void f(int x){cout<< "in f(int )\n";}
void f(int &x){cout<<"in f(int &)\n";}

int main(void)
{
  int a=10;
  f(a);// an error 
  return 0;
}
