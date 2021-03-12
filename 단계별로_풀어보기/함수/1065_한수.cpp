#include <iostream>

using namespace std;

bool CheckHanNum(int n) {
    int diff = n / 10 % 10 - n % 10;
    
    int last_digit;
    while (true) {
        last_digit = n % 10;
        n /= 10;
        if (n == 0) return true;
        else if (n % 10 - last_digit != diff) return false;
    }
}

int main() {
    int x;
    cin >> x;
    
    int cnt = 0;
    for (int i = 1; i <= x; i++) {
        if (CheckHanNum(i)) cnt++;
    }
    
    cout << cnt << '\n';
    
    return 0;
}
