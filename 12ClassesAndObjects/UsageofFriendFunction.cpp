//restrictions: No.1 aderived class does not inherit friend functions.
//No.2  friedn functions may not have a stronge-class specifier.That is ,they
//may not be declared as static or extern
#include<iostream>
using namespace std;
const int IDLE =0;
const int INUSE=1;
class c2;//forward declaration  or reference is needed because the declartion 
//of idle inside of c1 use c2
class c1{
  int status;//IDLE is off,INUSE is on screen;
  //...
public:
  void set_status(int state);
  friend int idle(c1 a,c2 b);
};
  class c2{
    int status;//IDE is off,INUSE is on screen
  public:
    void set_status(int state);
    friend int idle(c1 a,c2 b);
  };
void c1::set_status(int state)
{
  status=state;
}
void c2::set_status(int state)
{
  status=state;
}
int idle(c1 a,c2 b)
{
  if(a.status||b.status)return 0;
  else return 1;
}
int main()
{
  c1 x;
  c2 y;
  x.set_status(INUSE);
  y.set_status(IDLE);
  if(idle(x,y))cout<<"Screen can be used\n";
  else cout<<"In use.\n";
  return 0;
}
