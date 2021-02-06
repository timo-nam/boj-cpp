#include <iostream>
#include <string>

using namespace std;

string Compare(const int a, const int b) {
    if (a > b)
        return ">";
    else if (a == b)
        return "==";
    else // a < b
        return "<";
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << Compare(a, b) << '\n';
    
    return 0;
}
