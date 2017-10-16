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
void myfunc(int i)
{
  cout<<"value is:" <<i<<endl;
}
void myfunc(double d)
{
  double intpart, fracpart;

  fracpart=modf(d,&intpart);
  cout<<"Fractional part:"<<fracpart;
  cout<<endl;
  cout<<"Interger part:"<<intpart;
  cout<<endl;
  
}
int main(void)
{
  myfunc(1);
  myfunc(12.2);
  return 0;
}
/* These functions could not be replaced by
a generic function because they do not do the same thing
*/
