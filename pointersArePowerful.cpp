
#include <iostream>
using namespace std;


int main() {
    int a = 1 ;
    int* ptr = &a;
    a = *ptr;

    cout<<"Address to pointer a: " << a << endl;
    cout<<"Address to pointer ptr: " << *ptr << endl;
    *ptr = 10;
    cout<<"New value of a: " << *ptr << endl;
    return 0;
}