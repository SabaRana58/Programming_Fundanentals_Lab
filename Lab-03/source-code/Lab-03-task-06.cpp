#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num1 = rand() % 900 + 100; // 3-digit random like 247
    int num2 = rand() % 900 + 100; // like 129
    
    cout << "Math Tutor" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    
    cout << "Press Enter when ready to see answer...";
    cin.get();
    
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "  " << num1 + num2 << endl;
    
    return 0;
}
