#include <iostream>
using namespace std;

int main() {
    char small, capital;
    
    cout << "Enter alphabet in small (a-z): ";
    cin >> small;
    
    capital = small - 32; // ASCII logic: 'a' (97) - 32 = 'A' (65)
    
    cout << "Uppercase: " << capital << endl;
    
    return 0;
}
