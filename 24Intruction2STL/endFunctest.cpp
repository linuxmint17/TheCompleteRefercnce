#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<cctype>
using namespace std;
int main()
{
  vector<int> iv(10);
  vector<int>::iterator p;
  p=iv.begin();
 int   i=0;
 while(p!=iv.end()){
   *p++=(i++)+'a';
 }

 p=iv.end()-1;
 cout<<*p<<endl;
 p=iv.end();
 cout<<*p<<endl;
  
	return 0;
}

