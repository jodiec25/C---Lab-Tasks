#include <iostream> 
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand (time(0));

    int RandNum = rand () % 11;
    cout << "You have " << RandNum << " days until the end of your subscription" << endl;

    //Using a switch statement

    switch (RandNum) {
        case 0: cout << "Your subscription has expired!" << endl;
        break;

        case 1: cout << "Your subscription expires within a day,renew now save 10% " << endl;
        break;

        case 2: cout << "Your subscription ends in " << RandNum << "Renew now and save 10%" << endl;
        break;

        case 3: cout << "Your subscription ends in " << RandNum << "Renew now and save 10%" << endl;
        break;

        case 4: cout << "Your subscription ends in " << RandNum << "Renew now and save 10%" << endl;
        break;

        case 5: cout << "Your subscription ends in " << RandNum << "Renew now and save 10%" << endl;
        break;

        case 6: cout << "Your subscription will expire soon, renew now!" << endl;
        break;

        case 7: cout << "Your subscription will expire soon, renew now!" << endl;
        break;

        case 8: cout << "Your subscription will expire soon, renew now!" << endl;
        break;

        case 9: cout << "Your subscription will expire soon, renew now!" << endl;
        break;

        case 10: cout << "Your subscription will expire soon, renew now!" << endl;
        break; 

        default: cout << "You have an active subscription" << endl;
        break;

    }

    return 0;

}