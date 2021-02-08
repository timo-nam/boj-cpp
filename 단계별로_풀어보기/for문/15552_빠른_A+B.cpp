#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // C++98: use 'NULL' instead of 'nullptr'
    cout.tie(nullptr); // C++98: use 'NULL' instead of 'nullptr'
    
    int n;
    cin >> n;
    
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    
    return 0;
}
