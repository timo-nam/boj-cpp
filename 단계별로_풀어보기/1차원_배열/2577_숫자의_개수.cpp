#include <iostream>

using namespace std;

int main() {
    int a, b, c;    
    cin >> a >> b >> c;
    
    int multi = a * b * c;
    
    int ary[10] = {};
    while (multi) {
        ary[multi % 10]++;
        multi /= 10;
    }
    
    for (int element : ary) // arrays can be used with for-each loop
        cout << element << '\n';
    
    return 0;
}
