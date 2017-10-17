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
const int SIZE=10;
//Create  ageneric stack class
template <class StackType> class stack{
  StackType stck[SIZE];//holds the stack
  int tos;//index of top-of-stack
public:
  stack(){tos=0;}//initialize stack
  void push(StackType ob);//push object on stack
  StackType pop();//pop object from stack
};
//Push an object.
template <class StackType> void stack<StackType>::push(StackType ob)
{
  if(tos==SIZE){
    cout<<"stack is full.\n";
    return ;
  }
  stck[tos]=ob;
  tos++;
}
template <class StackType> StackType stack<StackType>::pop()
{
  if(tos==0){
      cout<<"Stack is empty.\n";
      return 0;
    }
    tos--;
    return stck[tos];
}
    
  int main(void)
{
  //Demonstrate character stacks
  stack<char> s1,s2;//create two characters stacks
  int i;

  s1.push('a');
  s2.push('x');
  s1.push('b');
  s2.push('y');
  s1.push('c');
  s2.push('z');

  for(i=0;i<3;i++) cout<<"Pop s1: "<<s1.pop()<<endl;
  for(i=0;i<3;i++) cout<<"Pop s2: "<<s2.pop()<<endl;

  //demonstrate double stacks
  stack<double> ds1,ds2;//create two double stacks
  ds1.push(1.1);
  ds2.push(2.2);
  ds1.push(3.3);
  ds2.push(4.4);
  ds1.push(5.5);
  ds2.push(6.6);

  for(i=0;i<3;i++)cout<<"Pop ds1: "<<ds1.pop()<<endl;
    for(i=0;i<3;i++)cout<<"Pop ds2: "<<ds2.pop()<<endl;
  return 0;
}
