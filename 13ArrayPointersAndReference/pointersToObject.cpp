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
  int i;
public:
  cl(int j){ i=j;}
  int get_i(){return i;}
};
int main(void)
{
  cl ob(88),*p;
  p=&ob;//get address of ob
  cout<<p->get_i();// use ->call get_i()
  
  return 0;
}
