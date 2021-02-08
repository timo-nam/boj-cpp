#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int m = n;
    int cnt = 0;
    int a, b, c;
    
    do {
        cnt++;
        a = m / 10;
        b = m % 10;
        m = b * 10 + (a + b) % 10;
    } while (n != m);
    
    cout << cnt << '\n';
    
    return 0;
}
