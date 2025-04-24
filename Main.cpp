#include <iostream>
#include <limits>

using namespace std;

int main () {
    int InputUser;
    bool ValidInput = false;

    cout << "Enter an integer value between 5 and 10" << endl;

    while (ValidInput) {
        if (!(cin >> InputUser)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'/n');
            cout << "Sorry you have entered an invalid number, please try again" << endl;
            continue;
        }

        if (InputUser < 5 || InputUser > 10) {
            cout << "You entered: " << InputUser << " , enter a number between 5 and 10." <<endl;
        }
        else {
            ValidInput = true;
        }
        
    }
    cout << "Your input value ("<<InputUser<<") has been accepted." << endl;
    return 0;
}