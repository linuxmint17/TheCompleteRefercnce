#include<iostream>
using namespace std;

class myclass{
  int i;
public:
  void set_i(int n){i=n;}
  int get_i(){return i;}
};
int main()
{
  myclass ob1,ob2;
  ob1.set_i(99);
  ob2=ob1;//assign data from ob1 to ob2
  cout<<"this is ob2's i :"<<ob2.get_i()<<endl;
  return 0;
}
/*By default, all data from one object is assigned to the other by use of a bit-by-bit
copy. However, it is possible to overload the assignment operator and define some
other assignment procedure
*/
