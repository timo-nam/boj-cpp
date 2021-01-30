#include <iostream>

using namespace std;

int main() {
    /* make io faster */
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);  // C++98: use 'NULL' instead of 'nullptr'
    cout.tie(nullptr); // C++98: use 'NULL' instead of 'nullptr'
    /******************/

    cout << "Hello World!\n"; // '\n' is faster than 'endl'

    return 0;
}
