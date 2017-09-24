#include<iostream>
#include<new>
using namespace std;
//localize a try /catch to a function
void Xhandler(int test) 
{
	try{
		if(test) throw test;
	}
	catch(int i){
		cout<<"Caught Exception#:"<<i<<'\n';
	}
}
int main()
{
	cout<<"startt\n";
	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);
	cout<<"End";
	return 0;
}
