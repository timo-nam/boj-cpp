#include <iostream>

using namespace std;

inline void Print(int n, int sum) {
    cout << "Case #" << n << ": " << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    
    int a, b;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        Print(i, a + b);
    }
    
    return 0;
}
