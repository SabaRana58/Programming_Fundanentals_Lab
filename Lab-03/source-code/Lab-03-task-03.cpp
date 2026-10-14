#include <iostream>
using namespace std;
int main() {
    int units = 5;
    float mass = 10.5f;
    double weight;
    weight = mass * units; // units -> float, result float -> double
    cout << "Weight = " << weight << endl;
    return 0;
}
