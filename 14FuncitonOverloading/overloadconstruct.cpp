#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
//another overloading constructor sitution is
//to allowing Both Initialized and uninitialized Objects
class powers{
  int x;
public:
  powers(){x=0;}//no initializer
  powers(int n){x=n;}//initializer

  int getx(){return x;}
  void setx(int i){x=i;}
};
  
int main(void)
{
  powers ofTwo[]={1,2,4,8,16};//initialized
  powers ofThree[5];//uninitialized
  powers *p;
  int i;
  //show powers of two
  cout<<"Powers of two: "<<endl;
  for(i=0;i<5;i++)
    {
      cout<<ofTwo[i].getx()<<" ";
    }
  cout<<endl;
  //set powers of three
  for(i=0;i<5;i++)
    ofThree[i].setx(pow(3,i));
  //show powers of three
  cout<<"powers of three:";
  for (i=0;i<5;i++)
    cout<<ofThree[i].getx()<<" ";
    cout<<endl;

    try{
      p=new powers[5];//no initialization
    }
    catch(bad_alloc xa){
      cout<<"allocation Failure\n";
      return 1;
    }
    //initialize dynamic array with powers of two
    for(i=0;i<5;i++)
      {
	p[i].setx(ofTwo[i].getx());
      }
    //show powers of two
    cout<<"powers of two:"<<endl;
    for(i=0;i<5;i++)
      {
	cout<<p[i].getx()<<" ";
      }
    cout<<endl;
    delete []p;
  return 0;
}
