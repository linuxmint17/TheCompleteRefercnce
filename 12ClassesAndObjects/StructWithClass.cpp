#include<iostream>
#include<cstring>
using namespace std;
struct mystruct{
  void buildstruct(char * s);//public
  void showstruct();
private://now go private
  char str[255];
};
class mystr{
  char str[255];
public:
  void buildstr(char *s);
  void showstr();

};
void mystr::buildstr(char *s)
{ if(!*s) *str='\0';
  else strcat(str,s);
}
void mystr::showstr()
{
  cout<<str<<endl;
}

void mystruct::buildstruct(char *s)
{
  if(!*s)*str='\0';//initialize
  else strcat(str,s);
}
void mystruct::showstruct()
{
  cout<<str<<"\n";
}
int main()
{
  /*  mystruct s;
  s.buildstruct((char *)"");//init
  s.buildstruct((char *)"Hello ");
  s.buildstruct((char *)"there!");

  s.showstruct();
  */
  mystr s;
  s.buildstr((char*)"");
  s.buildstr((char*)"Hello ");
  s.buildstr((char*)" here");
  s.showstr();

  return 0;
}
