#include<stdio.h>
void f1();
extern int k;//this is just a declaration

void f2(){
  k=10;//error
  }
int main()
{
  f1();
  f2();
  printf("%d\n",k);
  return 0;
}
