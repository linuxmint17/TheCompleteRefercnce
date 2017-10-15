#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
  int *p,i;
  try{
    p=new int[10];//allocate 10 integer
  }catch(bad_alloc xa){
    cout<< "Allocation Failur\n";
    return 1;
  }
  for(i=0;i<10;i++)
    p[i]=i;
  for(i=0;i<10;i++)
    cout<<p[i]<<" ";
  cout<<endl;
  delete [ ] p;//release the array
    return 0;
}
