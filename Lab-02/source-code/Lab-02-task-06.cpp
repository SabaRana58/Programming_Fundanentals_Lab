#include <iostream>
using namespace std;

int main() {
    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
    double subtotal, salesTax, total;
    
    subtotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subtotal * 0.06; // 6% tax
    total = subtotal + salesTax;
    
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;
    
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;
    
    return 0;
}
