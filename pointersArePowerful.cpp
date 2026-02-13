
#include <iostream>
using namespace std;

int main() {

    int arr[5]= {1,2,3,4,5};
    int* ptr = arr;

    cout << "- Pointers are powerful - \n ";
    cout<< "\n Addresses of each arr: \n ";
    for (int i = 0; i < 5; i++) {

        cout<< "Address of arr[ "<< i <<"]: " << (ptr + i) << endl;
    }
        cout<< "\nTransversing array using pointer increment: \n";
    ptr = arr;

    for (int i = 0; i < 5; i++) {
        cout<< "Value of arr[ " << i <<"]: " << *ptr << endl;
        ptr++;
    }
    return 0;
}