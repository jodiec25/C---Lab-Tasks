#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main () {

    int daysUntilExpiration;

    srand(time(0));

    daysUntilExpiration = rand() % 12;

if ( daysUntilExpiration <= 10) {
    cout << "Your subscription will expire soon. Renew now! " << daysUntilExpiration << endl;}
    else { 
        cout << "You have an active subscription! " << endl;
    }

if (daysUntilExpiration <= 5 && daysUntilExpiration > 1) {
        cout << "Your subscription will expire in " << daysUntilExpiration << "days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }
if (daysUntilExpiration == 1 ) {
        cout<< "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 10%" << endl; 
    }
if (daysUntilExpiration == 0) { 
        cout << "Your subscription has expired" << endl;
    }


    return 0;
}
