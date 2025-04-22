#include <iostream>
#include <string>
using namespace std;

int main() {
    int * dynamicint = nullptr;
    string * dynamicstring = nullptr;

    int integerV;
    string stringV;

    dynamicint = &integerV;
    dynamicstring = &stringV;

    cout << "Enter a number to be assigned to the integer value" << endl;
    cin >> *dynamicint;

    cout << "Enter a word to be assigned to the string value" << endl;
    cin >> *dynamicstring;

    cout<<"The integer you entered was: "<<integerV<<".\n";
    cout<<"The integer you entered was: "<<stringV<<".\n";

    delete dynamicint;
    delete dynamicstring;

    return 0;

}