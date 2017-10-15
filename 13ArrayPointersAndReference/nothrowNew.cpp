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
int main(void)
{ int *p,i;
  p=new (nothrow) int[32];//use nothrow option
  if(!p){
    cout<<"Allocation failure";
    return 1;
  }
  for(i=0;i<32;i++)p[i]=i;
  for(i=0;i<32;i++)cout<<p[i]<<" ";
  cout<<endl;
  delete []p;//free the memory
    
  return 0;
}
//the Placement Form of new
//There is a special form of new, calledthe placement form,that can be used to
//specify an alternative method of allocating memory.It is primarily useful
//when overloading the new operator for special circumstances.
//Here is its general form:
//p_var= new (arg-list)type;
//Here,arg-list si a comma-separated list ofvalues passed to an voerloaded
//of new
