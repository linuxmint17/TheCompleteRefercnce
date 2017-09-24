#include<iostream>
#include<new>
using namespace std;
void Xtest(int test)
{
	cout<<"Inside Xtest,test is:"<<test<<"\n";
	if(test) throw test;
}
int main()
{
	cout<<"Strat \n";
	try{//start a try block
	cout<<"inside try block\n" ; 
	Xtest(0);
	Xtest(1);
	Xtest(2); 
	}
	catch(int i){//cathc an error
	cout<<"catught an exception -- value is:";
	cout<<i<<"\n";
	}
	cout<<"End";
	return 0;
}
