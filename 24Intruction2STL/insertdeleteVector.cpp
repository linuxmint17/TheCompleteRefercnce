#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<cctype>
using namespace std;
//demonstrate insert and erase
int main()
{
  vector<char> v(10);
  vector<char> v2;
  char str[]="<Vector>";
  unsigned int i=0;
  //initialize v
  for(i=0;i<10;i++)v[i]=i+'a';
  //copy charactres in str into v2
  for(i=0;str[i];i++)v2.push_back(str[i]);

  //display orginal contents of vector
  cout<<"orginal contents of v\n";
  for(i=0;i<v.size();i++)    cout<<v[i]<<" ";
  cout<<"\n\n";
  
  vector<char>::iterator p=v.begin();
  p+=2;//pointer to 3rd element

  //insert 10 X's into v
  v.insert(p,10,'X');

  //display contents after insertion
  cout<<"size after inserting X's ="<<v.size()<<endl;
  cout<<"contents after insert:\n";
    for(i=0;i<v.size();i++)    cout<<v[i]<<" ";
    cout<<"\n\n";


    //remove those elemnts
    p=v.begin();
    p+=2;//point to 3rd elemnt
    v.erase(p,p+10);//remove netxt 10 elements
    
  //display contents after erase
  cout<<"size after erase X's ="<<v.size()<<endl;
  cout<<"contents after erase :\n";
    for(i=0;i<v.size();i++)    cout<<v[i]<<" ";
    cout<<"\n\n";

    //insert v2 into v
    v.insert(p,v2.begin(),v2.end());
    cout<<"size after v2's insertion=";
    cout<<v.size()<<endl;
    cout<<"contents after insert:\n";
    for(i=0;i<v.size();i++)    cout<<v[i]<<" ";
    cout<<"\n\n";
    
	return 0;
}

