#include<iostream>
using namespace std;
//this example uses catch(...) as the a default  .
void Xhandler(int test){
	try{
		if(test==0) throw test;//throw int
		if(test==1) throw 'a';//throw char
		if(test==2) throw 123.23; //throw double
	}
	catch(int i){//cathch an int exception 
		cout<< "caught an integer \n";

	}
	catch(...){//catch all other exceptions
		cout<< "caught one !\n";
	}
}
int main()
{
	cout<<"Start \n";
	Xhandler(0);
	Xhandler(1);
	Xhandler(2);
	cout<<"End";
	return 0;
}
