#include <iostream>
using namespace std;

int main () {
    int rows, columns;

    cout<< "Enter the number of rows (maximum 3): ";
    cin >> rows;

while (rows > 3 || rows < 1) {
    cout << "This is invalid, enter a number between 1-3: ";
    cin >> rows;
}

cout << "Enter the number for columns (maximum 3): " << endl;
cin >> columns;
while (columns > 3 || columns < 1) {
    cout << "This is invalid, enter a number between 1-3: ";
    cin >> columns; 
}

double** array = new double*[rows];
for (int i= 0; i < rows; ++i) {
    array[i] = new double[columns];
}
cout << "\n Assigning values... \n";
for (int i=0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
        cout << "Enter a value for the array [" << i << "][" << j << "]: ";
        cin >> array [i][j];
    }
}

cout << "\n Array values: \n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
        cout << array[i][j] << " ";
    }

    cout << endl;
}

for (int i = 0; i < rows; ++i) {
    delete[] array[i];
}
delete [] array;    
return 0;
}
