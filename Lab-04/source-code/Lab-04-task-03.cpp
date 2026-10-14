#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 75 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60 && marks < 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 45 && marks < 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 30 && marks < 45) {
        cout << "Grade: D" << endl;
    } else if (marks < 30) {
        cout << "Grade: F (Fail)" << endl;
    } else {
        cout << "Invalid marks!" << endl;
    }
    return 0;
}
