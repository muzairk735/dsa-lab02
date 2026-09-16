#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int* values = new int[n];

    // input of three integers
    cout << "Enter 3 integers: ";
    for (int i=0; i<n; i++) {
        cin >> values[i];
    }

    // displaying all three integers
    cout << "Values: ";
    for (int i=0; i<n; i++) {
        cout << values[i] << " ";
    }

    cout << endl;

    // releasing the dynamically allocated array
    delete[] values;

    // making pointer null
    values = nullptr;

    return 0;
}