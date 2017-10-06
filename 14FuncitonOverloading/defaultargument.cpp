#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//default indent to -1. this value tells the function
//to resuse the previous value.
void iputs(char *str,int indent= -1);
int main(void)
{
  iputs((char *)"hello there ",10);
  iputs((char *)"this will be indented 10 spaces by default");
  iputs((char *)"This will be indented 5 spaces",5);
  iputs((char *)"THis is not indented",0);
  
  return 0;
}
void iputs(char *str,int indent)
{
  static int  i=0;//hold previous indent value

  if( indent>=0)
    i=indent;
  else //reuse old indent value
    indent=i;

  for (;indent;indent--)
    cout<<" ";
  cout<<str<<endl;
}
//Once you begin to define parameters that take default values, you cannot specify
//	     a nondefaulting parameter. That is, a declaration like this is also wrong and will
//	     not compile:
//	     int myfunc(float f, char *str, int i=10, int j);
//Because i has been given a default value, j must be given one too.

//All parameters that take default values must appear to the right of those that do
//not. For example, it is incorrect to define iputs( ) like this:
    // wrong!
//  void iputs(int indent = -1, char *str);
