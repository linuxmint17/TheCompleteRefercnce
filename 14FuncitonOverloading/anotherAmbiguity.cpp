#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
char myfunc(unsigned char ch){return ch-1;}
char myfunc(char ch){return  ch+1;}
int main(void)
{
  cout<<myfunc('c');//this calls myfunc(char)
  //  cout<<myfunc(88);//ambiguous
  
  return 0;
}
