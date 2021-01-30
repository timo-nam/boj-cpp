#include <iostream>

using namespace std;

int Operate(const int& a, const int& b);

int main() {
    int a, b;
    cin >> a >> b;
    
    a = Operate(a, b);
    
    if (a == 0)
        return 0;
    // else
    cout << '.';
    
    for (int i = 0; i < 10; i++) {
        a = Operate(a, b);
        if (a == 0)
            break;
    }
    
    cout << '\n';
    
    return 0;
}

int Operate(const int& a, const int& b) {
    cout << a / b;
    return a % b * 10;
}
