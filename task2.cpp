#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students in class: ";
    cin >> n;
    // validating range
    if (n<=0)
        // error message if invalid
        cout << "Number of students must be greater than 0.";
        
    // normal execution conitnued if valid
    else {

        int* marks = new int[n];

        // taking input of marks values
        cout << "Enter " << n << " marks (0-100): ";
        for (int i=0; i<n; i++) {
            cin >> *(marks + i);
        }

        // declaring and initialising count and total 
        float total=0;
        int count50 = 0;
        cout << "Entered marks: ";
        for (int i=0; i<n; i++) {
            cout << *(marks + i) << " ";

            // updating total
            total += *(marks + i);
            // updating count if required
            if (*(marks + i) >= 50)
                count50++;  
        }

        cout << endl << "Total marks = " << total << endl;
        cout << "Average marks = " << total / n << endl;
        cout << "Number of marks greater than or equal to 50 = " << count50;

        // freeing up memeory space from heap and making pointer null
        delete [] marks;
        marks = NULL;
    }

    return 0;
}