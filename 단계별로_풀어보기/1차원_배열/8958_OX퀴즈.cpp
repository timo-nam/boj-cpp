#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        
        int sum = 0;
        int point = 0;
        for (char c : str) {            
            if (c == 'O')
                sum += ++point;
            else // c == 'X'
                point = 0;
        }
        
        cout << sum << '\n';
    }
    
    return 0;
}
