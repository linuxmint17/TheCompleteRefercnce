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
//even though a generic function overloads itself as needed
//you can explicitly overload one,too. This is formally called explicit
// specialization .if you overload a generic function.that overloaded function
//overrides(or "hide")the generic function relative to that generic function
//relative to that specific version.

//overload a template funciton
template <typename X> void swapargs(X &a,X &b)
{
  X temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"Inside template swapargs.\n";
}
//This overrides the generic version fo swapargs() for ints
//void swapargs(int &a,int &b)
//the new-style explicit specialization
template <> void swapargs(int &a,int &b)
{
  int temp;
  temp=a;
  a=b;
  a=temp;
  cout<<"Inside swapargs int specialization.\n";
}
int main(void)
{ 
  int i=10,j=20;
  double x=10.1,y=23.3;
  char a='x',b='z';
  cout<<"Original i,j:"<<i<<" "<<j<<endl;
  cout<<"Original x,y:"<<x<<" "<<y<<endl;
  cout<<"Original i,j:"<<a<<" "<<b<<endl;

  swapargs(i,j);//call explicitly overloaded swapargs()
  swapargs(x,y);//calls generic swapargs()
  swapargs(a,b);//calls generic swapargs()
  cout<<"Swapped i,j:"<<i<<" "<<j<<endl;
  cout<<"Swapped x,y:"<<x<<" "<<y<<endl;
  cout<<"Swapped i,j:"<<a<<" "<<b<<endl;

  
  return 0;
}
/*Explicit specialization of a template allows you to tailor a version of a generic
function to accommodate a unique situation—perhaps to take advantage of some
performance boost that applies to only one type of data, for example. However, as
a general rule, if you need to have different versions of a function for different data
types, you should use overloaded functions rather than templates.
*/
