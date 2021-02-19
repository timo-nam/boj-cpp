#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int *ary = new int[n];
    
    int mx = -1;
    // array-like pointer cannot be used with for-each loop
    for (int i = 0; i < n; i++) {
        cin >> ary[i];
        mx = max(ary[i], mx);
    }
    
    double sum = 0.;
    for (int i = 0; i < n; i++)
        sum += (double)ary[i] / mx * 100;
    
    // array length == sizeof(ary) / sizeof(ary[0])
    // array-like pointer length != sizeof(ary) / sizeof(ary[0])
    cout << sum / n << '\n';
    
    delete[] ary; // !!! delete with []
    
    return 0;
}
