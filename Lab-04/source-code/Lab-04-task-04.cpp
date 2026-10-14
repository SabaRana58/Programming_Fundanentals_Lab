#include <iostream>
using namespace std;

int main() {
    // Part 1: Find Largest Number using Nested if...else
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    int largest;
    if (n1 >= n2) {
        if (n1 >= n3) {
            largest = n1;
        } else {
            largest = n3;
        }
    } else {
        if (n2 >= n3) {
            largest = n2;
        } else {
            largest = n3;
        }
    }
    cout << "Largest Number is: " << largest << endl;

    // Part 2: Check if positive and count digits
    int num;
    cout << "\nEnter a number to check digits: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is Positive" << endl;
        int count = 0;
        int temp = num;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
        cout << "Number of digits: " << count << endl;
    } else {
        cout << "Number is not Positive" << endl;
    }

    return 0;
}
