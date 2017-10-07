#include<iostream>
using namespace std;
class base{
  int i;//private
public:
  int j,k;
  void seti(int x){i=x;}
  int geti(){return i;}
};
//Inherit base as private
class derived:private base{
public:
  //the next three statements override base's inheritance as private and resotre j,
  //seti(), and geti() to public access
  base::j;//make j public again - but not k
  base::seti;//make seti() public
  base::geti;//make geti() public
 
 //base::i;///illegal ,you cannot elevate access
  int a;;// public  in derived
};
int main(){
  derived ob;
  //ob.i=10;//illegal because i is private in derived;
  ob.j=20;//legal because j is made public in derived
  //ob.k=30;//illeagal beacause k is private in derived

  ob.a=40;//legal because a is public in derived
  ob.seti(10);

  cout<<ob.geti()<<" "<<ob.j<<" " <<ob.a<<endl;
  return 0;
}
