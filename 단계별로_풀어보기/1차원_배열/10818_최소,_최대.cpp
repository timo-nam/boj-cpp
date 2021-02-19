#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    // "INT_MIN", "INT_MAX" are defined in <climits>
    // "min()", "max()" are defined in <algorithm>
    // variable name "min" or "max" may conflict with the function name
    int mn = INT_MAX;
    int mx = INT_MIN;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mn = min(a, mn);
        mx = max(a, mx);
    }
    
    cout << mn << ' ' << mx << '\n';
    
    return 0;
}
