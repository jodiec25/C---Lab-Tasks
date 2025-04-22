#include <iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondvalue;

    int * pPointer = nullptr;

    pPointer = &firstvalue;
    *pPointer = 10; //Indirection

    pPointer = &secondvalue;
    *pPointer = 20; //Indirection

    cout<<"firstvalue is "<<firstvalue<<endl;
    cout<<"secondvalue is "<<secondvalue<<endl;
    cout<<"what about the value of the pointer "<<*pPointer<<endl;

    delete pPointer;
    pPointer = nullptr;

    return 0;
}   