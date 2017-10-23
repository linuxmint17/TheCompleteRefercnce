#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
  vector<char> v(10);//create a vector of length 10

  unsigned int i;
  //display original size of v
  cout<<"size= "<<v.size()<<endl;
  //assign the elemnts of the vector some values
  for(i=0;i<10;i++)v[i]=i+'a';

  //display contents of vector
  cout<<"Current contents:\n";
  for(i=0;i<v.size();i++)cout<<v[i]<<" ";
  cout<<endl;

  cout<<"Expanding vector\n";
  /*put more values onto the end of the vector,
     it will grow as needed*/
  for(i=0;i<10;i++)v.push_back(i+10+'a');

  //display current size of v
  cout<<"size now="<<v.size()<<endl;

  //display contents of vector
  cout<<"current contents:\n";
  for(i=0;i<v.size();i++)cout<<v[i]<<" ";
  cout<<endl;

  //  change contents of vector
  for(i=0;i<v.size();i++) v[i]=toupper(v[i]);
  cout<<"modified contents:\n";
  for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
	  return 0;
}
