#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//the static_cast operator isessentially a substitute for the orginal cast
//operator .It simply performs a nonpolymorphic cast.
using namespace std;
//using static_cast
int main(void)
{
  int i;
  for(i=0;i<10;i++)
    cout<<static_cast<double> (i)/3<<endl;

  return 1;
}
