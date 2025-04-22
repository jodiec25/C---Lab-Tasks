#include <iostream>
using namespace std;

int main(){

    int numberArray[5];

    int* pPointer = nullptr;

    pPointer = numberArray;

    *pPointer = 10;

    pPointer++;
    *pPointer = 20;

    pPointer = &numberArray[2];
    *pPointer = 30;

    pPointer = numberArray + 3;
    *pPointer = 40;

    pPointer = numberArray;
    *(pPointer+4) = 50;

    for (int i = 0; i < 5 ; i++)
    {
        cout<<numberArray[i]<<", ";
    }
    

    return 0;
}