#include <iostream>
using namespace std;
int main() {
    int qty = 10, salesReps = 3;
    double unitsEach;
    
    // Original: unitsEach = qty / salesReps; -> integer division
    // Corrected with type cast:
    unitsEach = static_cast<double>(qty) / salesReps;
    
    cout << "unitsEach = " << unitsEach << endl;
    return 0;
}
