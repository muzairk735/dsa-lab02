#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of marks (1-10): ";
    cin >> n;
    int* marks = new int[n];

    // validating n
    if (n<1 || n>10)
        // exit with error message if invalid
        cout << "Number of marks should be 1-10.";

    else {
        cout << "Enter "<< n <<" mark(s): ";
        for (int i=0; i<n; i++) {
            cin >> marks[i];
        }

        // new array with one additional space
        int* newMarks = new int[n + 1];

        // copying original values
        for (int i=0; i<n; i++) {
            *(newMarks+i) = *(marks+i);
        }

        // input new mark into final position
        cout << "Enter new mark: ";
        cin >> *(newMarks + n);

        // releasing old block
        delete[] marks;

        // original pointer now refers to new block
        marks = newMarks;

        // update n
        n = n + 1;

        // displaying all values
        cout << "All marks: ";
        for (int i=0; i<n; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;

        // releasing final block 
        delete[] marks;
        marks = nullptr;

    }
    return 0;
}