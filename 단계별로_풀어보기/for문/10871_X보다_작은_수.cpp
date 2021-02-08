#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    int a;
    while (cin >> a) { // 'EOF' is considered zero  
    	if (a < x)
    		cout << a << ' ';
    }
    cout << '\n';

    return 0;
}
