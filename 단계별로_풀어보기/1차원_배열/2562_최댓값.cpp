#include <iostream>

using namespace std;

int main() {
    int mx = 0;
    int mx_idx;
    int a;
    for (int i = 1; i <= 9; i++) {
        cin >> a;
        if (a > mx) {
            mx = a;
            mx_idx = i;
        }
    }
    
    cout << mx << '\n' << mx_idx << '\n';
    
    return 0;
}
