#include<iostream>
using namespace std;
int i=1;//global i

void f()
{
  int i;//local i
 // i=10;//use local i;
  ::i=10000;//alter the global i
  cout<<"local i is" <<i<<endl;
}
int main()
{
  f();
  cout<<"the global i is" <<i<<endl;
}