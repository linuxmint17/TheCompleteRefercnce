#include<iostream>
using namespace std;
class myclass{
public:
  int i,j,k;//accessible to entire program
};
int main()
{
  myclass a,b;
  a.i=100;//access to i,j, and k is OK
  a.j=4;
  a.k=a.i*a.j;
 
  b.k=12;
  cout<<a.k<<" " <<b.k<<endl;
  return 0;
}
