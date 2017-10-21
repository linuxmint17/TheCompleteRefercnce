#include<iostream>
#include<iomanip>
#include<cstring>
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
  loc operator+(loc op2);
  loc operator()(int i,int j);
};
//overload + for loc
loc loc::operator+(loc op2)
{
  loc temp;
  temp.longitude=op2.longitude+longitude;
  temp.latitude=op2.latitude+latitude;
  return temp;
}
//overload () for loc
loc loc::operator()(int i,int j)
{
  longitude=i;
  latitude=j;
  return *this;
}
  
int main()
{

  loc ob1(10,20),ob2(1,1);
  ob1.show();//display 10 20
  cout<<endl;
  ob1(7,8);
  ob1.show();
  cout<<endl;
  
  ob1=ob1(10,10)+ob2;
  //  ob1.show();//display 15 50
  ob1.show();
  cout<<endl;
  return 0;
}
