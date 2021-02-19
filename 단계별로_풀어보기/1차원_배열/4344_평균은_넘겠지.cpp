#include <cstdio>

using namespace std;

// parameter "ary" is an array-like pointer
// so "ary" cannot be used with for-each loop
double get_percent(const int ary[], const int n, const double avg) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (ary[i] > avg)
            cnt++;
    }
    return (double)cnt / n * 100;
}

int main() {
    int c;
    scanf("%d", &c);
    
    for (int i = 0; i < c; i++) {
        int n;
        scanf("%d", &n);
        
        int sum = 0;
        int ary[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", ary + j);
            sum += ary[j];
        }
        
        double avg = (double)sum / n;
        printf("%.3f%%\n", get_percent(ary, n, avg));
    }
}
