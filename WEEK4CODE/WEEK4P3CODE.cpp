#include <iostream>
using namespace std;

int main() {
    double meal, tip, totalWithTip;
    cout << "Enter meal total: ";
    cin >> meal;

    tip = meal * 0.15;
    totalWithTip = meal + tip;

    cout << "Meal = " << meal << endl;
    cout << "Tip = " << tip << endl;
    cout << "Total with tip = " << totalWithTip << endl;
    return 0;
}
