#include <iostream>
using namespace std;

int main() {
    double price, quantity, value;
    cout << "Enter current stock price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;

    value = price * quantity;
    cout << "Portfolio value = " << value << endl;
    return 0;
}
