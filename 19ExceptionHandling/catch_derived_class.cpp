#include<iostream>
using namespace std;
class B{
	
};
class D: public B{
	
};
int main()
{
	D deirved;
	try{
		throw deirved;
	}
	catch(B b){
		cout << "caught a base class.\n";

	}
	catch(D d){
		cout<<"This wont execute.\n";
	}
	return 0;
}