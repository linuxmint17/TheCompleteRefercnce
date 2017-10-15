#include<iostream>
using namespace std;
//restricting function throw types.
//this function can only throw ints chars and doubles
void Xhandle(int test) throw( int ,char ,double )
{
	if(test==0) throw test;//throw int
	if(test==1) throw 'a';//throw char
	if(test==2) throw 123.23;//throw double

}
int main()
{
	cout<<"start \n";
	try{
		//Xhandle(0);//also ,try with Xhandle(1),Xhandle(2)
	   //	Xhandle(1);
	   Xhandle(2) ;
	}
	catch(int i){
			cout<<"caught an interger \n";
		}
	catch(char c){
		cout<<"caught char\n";
	}
	catch(double d){
		cout<<"caught double \n";
	}
	
	cout<<"end\n";
	return 0;
}
