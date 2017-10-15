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
  int *p;
  try{
    //    p=new int ;//allocate space for an int
    p =new int (87);//initialize to 87
  }catch (bad_alloc xa){
    cout<<"Allocation Failure";
    return 1;
  }
  //  *p=100;
  cout<<"At "<<p<<" ";
  cout<<"is the value "<<*p<<endl;
  delete p;
  
  return 0;
}
