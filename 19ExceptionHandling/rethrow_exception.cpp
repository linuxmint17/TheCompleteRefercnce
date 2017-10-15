#include<iostream>
using namespace  std;
//in this case a char * exception
//this example illustrates rethrow an exception
void Xhandeler()
{
  try{
  	 throw "hello";//thrw a  char *
  }
  catch(const char *){//catch a char * 
    cout<<"caught char * inside Xhandeler\n";
    throw;//rethrow char * out of function
  }
}
int main()
{
	try{
		Xhandeler();
	}
	catch(const char *){
		cout<<"caught char * inside main\n";

	}
	cout<<"end\n";
	return 0;
}