#include <iostream>
using namespace std;

int main() {
    int v1 = 28, v2 = 32, v3 = 37, v4 = 24, v5 = 33;
    int sum;
    double average;
    
    sum = v1 + v2 + v3 + v4 + v5;
    average = sum / 5.0; // use 5.0 to get float average
    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
}
