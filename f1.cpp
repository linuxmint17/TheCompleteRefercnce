//namesapce {
//  int k;
//}
//static int k;//this is the same effect with the  unnamed namespace
//which makes the global variable works only in a file
int k;//this will make "g++ f1.cpp f2.cpp -o test.exe" work
void f1(){
  k=99;//ok
}
