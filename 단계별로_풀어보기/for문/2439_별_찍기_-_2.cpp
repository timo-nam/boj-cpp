#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i)
                cout << ' ';
            else // j >= n - i
                cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
