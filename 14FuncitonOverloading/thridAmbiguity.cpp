#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int myfunc(int i){return i;}
int myfunc(int i,int j=1){return i*j;}

int main(void)
{
  cout<<myfunc(4,5)<<endl;//calls myfunc(int ,int)
  cout<<myfunc(10);//ambiguous will not be compiled
  return 0;
}
