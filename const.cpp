#include <iostream>
#include <string>

using namespace std;

/*Const is a promise to not change the variable it is set to.
Promise helps simplify code
*/

int main()
{
    const int MAX_AGE = 101;

    int* a = new int; // int a created on the heap to get pointer(new int)
    const int* a = new int; // the contents of the pointer can't be altered
    int* const a = new int; // same as 'int* a = new int' . const can be altered
    const int* const a = new int; // pointer can be redirected but contents can't be altered

    *a = 2;
    a = (int*)&MAX_AGE;

    std::cout<<*a<<std::endl;
}
