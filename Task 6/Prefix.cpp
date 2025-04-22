#include <iostream> 
using namespace std;

int main(){

    int x =3;
    int y = x++;

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    int a =3;
    int b = ++a;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}