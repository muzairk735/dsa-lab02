#include <iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    // taking inputs
    cout << "Enter (non-negative) sales across three days for" << endl;
    // iterating through 2 branches
    for (int branch = 0; branch<2; branch++) {
        cout << "Branch " << branch+1 << ": ";
        // iterating through 3 days
        for (int day = 0; day<3; day++) {
            cin >> *(*(rowPtr + branch) + day);
        }
    }

    cout << endl;

    // displaying in row table
    cout<< "TABLE:" << endl;
    // 2 rows
    for (int branch = 0; branch<2; branch++) {
        cout << "Branch " << branch+1 << ": ";
        // 3 days
        for (int day = 0; day<3; day++) {
            cout << *(*(rowPtr + branch) + day) << " ";
        }
        cout << endl;
    }

    cout << endl;

    // branch totals
    int branch_total;
    for (int branch = 0; branch<2; branch++) {
        branch_total = 0;
        
        for (int day = 0; day<3; day++) {
            // adding each day's sales of that branch
            branch_total += *(*(rowPtr + branch) + day);
        }
        cout << "Branch " << branch+1 << " Total: " << branch_total << endl;
    }

    cout << endl;

    // day totals
    int day_total;
    for (int day = 0; day<3; day++) {
        day_total = 0;
        
        for (int branch = 0; branch<2; branch++) {
            // adding each branch's sales on that day
            day_total += *(*(rowPtr + branch) + day);
        }
        cout << "Day " << day+1 << " Total: " << day_total << endl;
    }

}