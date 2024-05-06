#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Prompt the user to enter the dimensions of the array
    cout << "Enter the number of rows (not more than 3): ";
    cin >> rows;
    if (rows <= 0 || rows > 3) {
        cout << "Invalid number of rows. Please enter a number between 1 and 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (not more than 3): ";
    cin >> cols;
    if (cols <= 0 || cols > 3) {
        cout << "Invalid number of columns. Please enter a number between 1 and 3." << endl;
        return 1;
    }

    // Dynamically allocate a 2-dimensional array of doubles
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    // Assign values to each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> array2D[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
