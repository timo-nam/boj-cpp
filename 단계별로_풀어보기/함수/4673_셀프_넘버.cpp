#include <iostream>
#include <vector>

using namespace std;

const int kMaxNum = 10000;
vector<bool> isnt_self_num(kMaxNum + 1);

void CheckSelfNum(int n) {
    if (n > kMaxNum) return;
    // else
    int next_n = n;
    
    while (n) {
        next_n += n % 10;
        n /= 10;
    }
    
    if (isnt_self_num[next_n]) return; // "i" isn't a self number
    // else
    isnt_self_num[next_n] = true;
    CheckSelfNum(next_n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    
    for (int i = 1; i <= kMaxNum; i++) {
        if (!isnt_self_num[i]) { // "i" is a self number
            cout << i << '\n';
            CheckSelfNum(i);
        }
    }
    
    return 0;
}
