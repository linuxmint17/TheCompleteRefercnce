//Returning objects from a funciton.
#include<iostream>
using namespace std;
class myclass{
  int i;
public:
  void  set_i(int n){ i=n;}
  int get_i(){return i;}
};
myclass f();//return object of type myclass
int main(){
myclass o;
o=f();
cout<<o.get_i()<<endl;
return 0;
}
myclass f()
{
  myclass x;
  x.set_i(1);
  return x;
}
