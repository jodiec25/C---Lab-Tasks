#include <iostream>
#include <limits>
#include <string>

using namespace std;

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

double areaOfRectangle(double length, double width) {
    return length * width;
}

double areaOfSquare(double side) {
    return side * side;
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\nSelect shape to calculate area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                double base, height;
                cout << "Enter base of triangle: ";
                cin >> base;
                cout << "Enter height of triangle: ";
                cin >> height;
                cout << "Area of Triangle: " << areaOfTriangle(base, height) << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter length of rectangle: ";
                cin >> length;
                cout << "Enter width of rectangle: ";
                cin >> width;
                cout << "Area of Rectangle: " << areaOfRectangle(length, width) << endl;
                break;
            }
            case 3: {
                double side;
                cout << "Enter side of square: ";
                cin >> side;
                cout << "Area of Square: " << areaOfSquare(side) << endl;
                break;
            }
            case 4:
                running = false;
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}