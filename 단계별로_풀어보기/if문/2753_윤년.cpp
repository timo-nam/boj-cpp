#include <iostream>

using namespace std;

int IsLeapYear(const int year) {
    if ((year % 4 == 0 && year % 100) || year % 400 == 0) // leap year
        return 1;
    else // common year
        return 0;
}

int main() {
    int year;
    cin >> year;
    
    cout << IsLeapYear(year) << '\n';
    
    return 0;
}
