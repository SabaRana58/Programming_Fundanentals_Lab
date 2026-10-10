#include <iostream>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    area = PI * radius * radius;
    
    cout << "Area of Circle is: " << area << endl;
    return 0;
}
