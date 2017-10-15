#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//a function may  return a reference this has the rather strtling effect of
//allowing a function to be used on the left side of an assignment statement!
char &replace(int i);//return a reference
char s[80]="Hello There";
int main(void)
{
  replace(5)='X';//assign X to space after Hello
  cout<<s<<endl;
  return 0;
}
char &replace(int i)
{
  return s[i];
}
//One thing you must be careful about when returning references is that the
//object being referred to does not go out of scope after function terminates
