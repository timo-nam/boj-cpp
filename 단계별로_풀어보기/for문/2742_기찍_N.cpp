#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = n; i > 0; i--)
        cout << i << '\n';
    
    return 0;
}
