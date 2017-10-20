#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<new>
using namespace std;
class loc{
  int longitude ,latitude;
public:
  loc(){}
  loc(int lg,int lt){
    longitude=lg;
    latitude=lt;
  }
  void show(){
    cout<<longitude<<" ";
    cout<<latitude<<endl;
  }

};
//global new
void * operator new(size_t size)
{
  void *p;
  cout<<"In overloaded new.\n";
  p=malloc(size);
  if(!p){
    bad_alloc ba;
    throw ba;
}
  return p;
}
//global delete 
void  delete(void *p)
{
  cout<<"In overloaded delete.\n";
  free(p);
}
  
int main()
{
  loc *p1,*p2;
  float *f;
  try{
    p1 = new loc (10,20);
  }catch(bad_alloc xa){
    cout<<"Allocation error for p1.\n";
    return 1;
  }

  try{
    p2 = new loc (-10,-20);
  }catch(bad_alloc xa){
    cout<<"Allocation error for p2.\n";
    return 1;
  }
  try{
    f = new float;//uses overloaded new ,too
  }catch(bad_alloc xa){
    cout<<"Allocation error for f.\n";
    return 1;
  }
  *f=10.10F;
  cout<<*f<<endl;
  p1->show();
  p2->show();
  delete p1;
  delete p2;
  delete f;
 
    
  return 0;
}
