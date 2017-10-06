#include<iostream>
#include<cstdio>
#include<new>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
// The first version will operate like strcat( ) and concatenate the entire
//contents of one string to the end of another. The second version takes a third argument
//that specifies the number of characters to concatenate.
//void mystrcat(char *s1, char *s2, int len);
//void mystrcat(char *s1, char *s2)
//the two function can be replaced with one function with default argument
void mystrcat(char *s1,char *s2,int len=-1);
int main(void)
{
  char str1[80]="This is a test";
char str2[80]="0123456789";
 mystrcat(str1,str2,5);//concatenate 5chars
 cout<<str1<<endl;
 strcpy(str1,(char *)"this is a test");//reset str1
 mystrcat(str1,str2);//concatenate entire string
 cout<<str1<<endl;

  return 0;
}
//A custom version of strcat()
void mystrcat(char *s1,char *s2,int len)
{
  //find end of s1
  while(*s1)s1++;
  if(len==-1)len=strlen(s2);

  while(*s2&&len)
    {
      *s1++=*s2++;
      len--;
    }
  *s1='\0';//null terminate s1
}
      
