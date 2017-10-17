#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//a generic array  compaction function
using namespace std;
template <class X>void compact(
			       X  *items,//pointer to array to be compacted
			       int count ,//number of items in array
			       int start ,//starting index of compated region
			       int end)//ending index of compacted region
{
  register int i;
  for(i=end +1;i<count;i++,start++)
    items[start]=items[i];
  //for sackke of illustration ,the remainder of the array will be zeroed.

  for(;start<count;start++) items[start]=(X) 0;
}

int main(void)
{
  int nums[7]={0,1,2,3,4,5,6};
  char str[18]="Generic Functions";

  int i;
  cout<<"here is uncompacted interger  array: ";
  for(i=0;i<7;i++)
    cout<<nums[i]<<' ';
  cout<<endl;

  cout<<"here is uncompacted string: ";
  for(i=0;i<18;i++)
    cout<<str[i]<<' ';
  cout<<endl;

  compact(nums,7,2,4);
  compact(str,18,6,10);

  
  cout<<"here is compacted interger  array: ";
  for(i=0;i<7;i++)
    cout<<nums[i]<<' ';
  cout<<endl;

  cout<<"here is compacted string: ";
  for(i=0;i<18;i++)
    cout<<str[i]<<' ';
  cout<<endl;
  return 0;
}
