#include<iostream>
#include<new>
using namespace std;
//defferent types of exceptions will be caught 
void Xhandler(int test)
{
	try{
		if(test) throw test;
		else throw "value is zero";
	}
	catch(int i){
		cout<<"cautght Exception #£º"<< i<< "\n" ;
	}
	catch(const char *str){
		cout<<"caught a string :";
		cout<<str<<'\n';
		
	}
	
}
 int main()
 {
 	cout<<"Start \n";
 	Xhandler(1);
 		Xhandler(2);
 			Xhandler(0);
 				Xhandler(3);
 	cout<<"end";
 	return 0;
 				
 }
