#include <iostream> 
using namespace std;

int main () {
    //null pointer
    int* pPointer = nullptr;

    int numbersArray [3] = {10,20,30};

    //assign address of first element to pointer
    pPointer = numbersArray;

    //output the address of the first element using the pointer and indirection
    cout << "Value at pPointer: " << *pPointer << endl;

    //assign address of first element to pointer
    pPointer = numbersArray;

    //this outputs the value of the first element
    cout << "Value at pPointer++ : " << *(pPointer++) << endl;

    return 0;
}