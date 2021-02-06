#include <iostream>

using namespace std;

char ReturnGrade(const int score) {
    switch (score / 10) {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'F';
    }
}

int main() {
    int score;
    cin >> score;
    
    cout << ReturnGrade(score) << '\n';
    
    return 0;
}
