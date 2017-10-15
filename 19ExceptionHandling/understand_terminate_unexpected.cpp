#include<iostream>
#include<exception>
#include<cstdlib>
using namespace  std;
//set a new terminate handler 
void my_Thandler(){
	cout<<"Inside new terminate handler\n";
	abort();
}
int main()
{
	//set a new terminate handler
	set_terminate(my_Thandler);
	try{
		cout<<"Inside try block\n";
		throw 100;//throw an error;
	}
	catch(double i){//won't cath an int exception
    //...
    }
    return 0;
}
