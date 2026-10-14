#include <iostream>
using namespace std;
int main() {
    int a, b = 2;
    float c = 4.2f;
    a = b * c; // b*c = 8.4 -> truncated to 8 when stored in int a
    cout << "Value in a = " << a << endl; // Answer: 8 -> Option B
    return 0;
}
