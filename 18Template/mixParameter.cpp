#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//Using standard parameters int a template function
using namespace std;
const int TABWIDTH=8;
//display data at specified tab position
template <typename X> void tabOut(X data,int tab)
{
  for(;tab;tab--)
    for(int i=0;i<TABWIDTH;i++) cout<<' ';

  cout<<data<<endl;
}
int main(void)
{
  tabOut("This is a test",0);
  tabOut(100,1);
  tabOut('X',2);
  tabOut(10/3,3);
  return 0;
}
