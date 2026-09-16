#include <iostream>
using namespace std;

int main() {
    int student_count, subject_count;

    // input of number of students
    cout << "Enter number of students: ";
    cin >> student_count;

    // validating row count
    if (student_count <=0)
        // end with suitable error message if invalid
        cout << "Number of students must be greater than 0.";
    
    else {
        
        // input of number of subjects
        cout << "Enter number of subjects: ";
        cin >> subject_count;
        
        // validating column count
        if (subject_count <= 0) 
            // end with suitable error message if invalid
            cout << "Number of subjects must be greater than 0.";
        
        else {
            // 2D dynamic array
            int** marks = new int* [student_count]; // row pointers
            for (int i=0; i<student_count; i++) {
                // marks array for ith student
                marks[i] = new int [subject_count];
            }

            // taking marks inputs
            cout << "Enter marks (0-100) for" << endl;
            for (int r=0; r<student_count; r++){
                cout << "STUDENT " << r+1 << endl;
                
                for (int c=0; c<subject_count; c++) {
                    cout << "Subject " << c+1 << " : ";
                    cin >> *(*(marks + r) + c); 
                }
                cout << endl;
            }

            // matrix display
            cout << "ALL MARKS:" << endl;
            for (int r=0; r<student_count; r++){
                for (int c=0; c<subject_count; c++) {
                    cout << *(*(marks + r) + c) << "  "; 
                }
                cout << endl;
            }
            cout << "(Rows = students; Columns = subjects)" << endl;
            
            int stdnt_total, highest_total, top_student;
            
            // totalling each student's marks
            cout << endl << "TOTAL MARKS" << endl;
            for (int stdnt=0; stdnt<student_count; stdnt++) {
                stdnt_total = 0; // reset total for each student

                for (int sbj=0; sbj<subject_count; sbj++) {
                    //adding marks of all subjects for that student
                    stdnt_total += *(*(marks + stdnt) + sbj);
                }

                cout << "Student " << stdnt+1 << " : " << stdnt_total << endl;

                // if current student is the first student
                // OR if current student's total is higher than previous highest
                if (stdnt == 0 || stdnt_total > highest_total) {
                    // update highest total and top student number
                    highest_total = stdnt_total;
                    top_student = stdnt+1; // numbers start from 1, while indices from 0
                }
            }

            cout << endl << "Top student number: " << top_student<< endl;
            cout << "Highest Total = " << highest_total;
            
            for (int r=0; r<student_count; r++) {
                delete[] marks[r];
            }
            delete[] marks;
            marks = NULL;

            
        }

    }    
    
    return 0;

}