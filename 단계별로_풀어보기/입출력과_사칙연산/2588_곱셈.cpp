#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = 0;
    for (int i = 1; i <= 100; i *= 10) {
        int tmp = a * (b % 10);
        b /= 10;
        cout << tmp << '\n';
        sum += tmp * i;
    }
    
    cout << sum << '\n';
    
    return 0;
}
