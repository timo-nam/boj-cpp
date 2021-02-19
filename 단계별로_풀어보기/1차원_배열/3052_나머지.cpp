#include <iostream>

using namespace std;

int main() {
    int a;
    int cnt = 0;
    bool is_checked[42] = {};
    for (int i = 0; i < 10; i++) {
        cin >> a;
        a %= 42;
        if (!is_checked[a]) { // is_checked[a] == false
            is_checked[a] = true;
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    
    return 0;
}
