#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class cl{
  int h,i;
  public:
  cl(int k,int j){i=k;h=j;}
  int get_i(){return i;}
  int get_h(){return h;}
};
int main(void)
{
  cl ob[3] = {
    cl(1,2),
    cl(3,4),
    cl(5,6)
  };
  int i;
  for(i=0;i<3;i++)
    {  cout<<ob[i].get_i();
      cout<<"  ";
      cout<<ob[i].get_h()<<endl;
    }
  

  return 0;
}
