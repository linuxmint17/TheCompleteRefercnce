#include<iostream>
using namespace std;
class base{
public:
base(){cout<<"Constructing base"<<endl;}
~base(){cout<<"Destructing base\n"<<endl;}
};
class derived: public base{
public:
derived(){cout<<"Constructing derived\n";}
~derived(){cout<<"destructing derived"<<endl;}
};
int main()
{
derived ob;
//do nothing but construct and destruct ob
return 0;
}
