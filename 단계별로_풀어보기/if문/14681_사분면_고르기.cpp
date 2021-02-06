#include <iostream>

using namespace std;

int ReturnQuadrant(const int x, const int y) {
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else // x > 0 && y < 0
        return 4;
}

int main() {
    int x, y;
    cin >> x >> y;
    
    cout << ReturnQuadrant(x, y) << '\n';
    
    return 0;
}
