#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
template <class X>
void bubble( X *items,//pointer to array to be sorted
	     int count)//number of items in array
{
  register int a,b;
  X t;

  for(a=1;a<count;a++)
    for(b=count-1;b>=a;b--)
      if(items[b-1]>items[b])
	{ //exchange elements
	  t=items[b-1];
	  items[b-1]=items[b];
	  items[b]=t;
	}
}    
using namespace std;
int main(void)
{
  int iarray[7]={7,5,4,3,9,8,6};
  double darray[5]={4.3,2.5,-0.9,100.2,3.0};
  int i;
  cout<<"here is unsorted int array "<<endl;
  for(i=0;i<7;i++)
    cout<<iarray[i]<<' ';
  cout<<endl;
cout<<"\nhere is unsorted double array "<<endl;
  for(i=0;i<5;i++)
    cout<<darray[i]<<' ';
  cout<<endl;
  bubble(iarray,7);
  bubble(darray,5);

    cout<<"here is unsorted int array "<<endl;
  for(i=0;i<7;i++)
    cout<<iarray[i]<<' ';
  cout<<endl;
cout<<"\nhere is unsorted double array "<<endl;
  for(i=0;i<5;i++)
    cout<<darray[i]<<' ';
  cout<<endl;
  cout<<"here is sorted int array "<<endl;
  for(i=0;i<7;i++)
    cout<<iarray[i]<<' ';
  cout<<endl;
cout<<"\nhere is sorted double array "<<endl;
  for(i=0;i<5;i++)
    cout<<darray[i]<<' ';
  cout<<endl;


  
  return 0;
}
