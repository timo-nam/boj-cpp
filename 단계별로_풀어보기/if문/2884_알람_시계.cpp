#include <iostream>
#include <string>

using namespace std;

void SetAlarm(int& h, int& m) {
    m -= 45;
    
    if (m < 0) {
        h -= 1;
        m += 60;
        
        if (h < 0)
            h += 24;
    }
}

int main() {
    int h, m;
    cin >> h >> m;
    
    SetAlarm(h, m);
    cout << h << ' ' << m << '\n';
    
    return 0;
}
