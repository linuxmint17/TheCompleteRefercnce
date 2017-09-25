/*Member functions may also be declared as static. There are several restrictions placed
on static member functions. They may only directly refer to other static members of the
class. (Of course, global functions and data may be accessed by static member functions.)
A static member function does not have a this pointer. (See Chapter 13 for information
on this.) There cannot be a static and a non-static version of the same function. A static
member function may not be virtual. Finally, they cannot be declared as const or volatile.
*/

#include <iostream>
using namespace std;
class cl{
    static int resource;
public:
    static int get_resource();
    void free_resource(){resource=0;}
};
int cl::resource;//define resource
int cl::get_resource()
{
    if(resource) return 0;//resource already in use
    else{
        resource=1;
        return 1;//resoucre allocated to this object
    }

    }
int main()
{
    cl ob1,ob2;
    //get_resource() is static so may be called independent 
    //of any object
    if(cl::get_resource())cout<<"ob1 has resource\n";
    if(!cl::get_resource()) cout<<"ob2 has denied resource\n";
    ob1.free_resource();
    if(ob2.get_resource())//can still using object syntax
         cout<<"ob2 can now use resource\n";
}
