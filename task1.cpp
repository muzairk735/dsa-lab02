#include <iostream>
using namespace std;

int main() {
    int sales[5], total = 0;
    int* p = sales;

    // reading 5 values
    cout << "Enter 5 non-negative integers: " ;
    for (int i=0; i<5; i++) {
        cin >> *(p+i);
    }
    // display and maintaining total
    cout << "Entered values: ";
    for (int i=0; i<5; i++) {
        cout << *(p+i) << " ";
        total += *(p+i);
    }
    // initial total
    cout << endl << "Sum of entered values: " << total << endl;

    // updating third day value
    *(p+2) += 2;
    total = 0;

    // display and maintaining total
    cout << "Updated values: ";
    for (int i=0; i<5; i++) {
        cout << *(p+i) << " ";
        total += *(p+i);
    }
    // updated total
    cout << endl << "Sum of updated values: " << total;
    return  0;
}