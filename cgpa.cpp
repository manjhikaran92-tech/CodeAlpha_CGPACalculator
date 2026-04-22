#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> courseNames(n);
    vector<double> grades(n);
    vector<int> credits(n);

    double totalPoints = 0, totalCredits = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << " name: ";
        cin >> courseNames[i];
        cout << "Grade points (0-10): ";
        cin >> grades[i];
        cout << "Credit hours: ";
        cin >> credits[i];
        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalPoints / totalCredits;

    cout << "\n--- Course Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << courseNames[i] << " | Grade: " << grades[i]
             << " | Credits: " << credits[i] << "\n";
    }
    cout << "\nYour CGPA is: " << cgpa << endl;
    return 0;
}