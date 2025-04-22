#include <iostream>
using namespace std;
int main() {
    //declare pointer and initialize it
    //so  that it doesn't store a random address
    int* pPointer = nullptr;

    int intergerVar = 5;

    //assign pointer to address of object
    pPointer = &intergerVar;

    //output the value of intergerVar
    cout << "intergerVar: " << intergerVar << endl;

    //output the address of integerVar
    cout << "Address of integerVar: " << &intergerVar << endl;

    //output the adress assigned to pPointer
    cout << "pPointer: " <<pPointer << endl;

    //output the address of Ppointer
    cout << "Address of pPointer" << &pPointer << endl;

    return 0;

}