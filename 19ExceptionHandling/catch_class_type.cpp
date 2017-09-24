#include<iostream>
#include<cstring>
#include<new>
using namespace std;
class MyException{
	public:
		char str_what[80];
		int what;
		
		MyException(){ *str_what=0;what=0;		}
	    MyException(char *s,int e)	{
	    	strcpy(str_what,s);
	    	what=e;
		}
	   
};
int main()
{
	int i;
	try{
		cout<<"Entry a positive number";
		cin>>i;
		if(i<0)
		  throw MyException((char *)"Not positive ",i);
	}
	catch(MyException e){// catch an error
	cout<<e.str_what<<":";
	cout<<e.what<<"\n";
	}
	return 0;
}
