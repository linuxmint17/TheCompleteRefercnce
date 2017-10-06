#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class cube{
  int  x,y,z;
public:
  cube(int i=0,int j=0,int k=0){x=i;y=j;z=k;}
  int volume(){ return x*y*z;}
};
int main(void)
{ cube a(2,3,4),b;
  cout<<a.volume()<<endl;
  cout<<b.volume()<<endl;

  return 0;
  
}
