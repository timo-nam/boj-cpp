#include <vector>

long long sum(std::vector<int> &a) {
    long long ans = 0;
    for (auto val : a)
        ans += val;
    return ans;
}

long long sum2(std::vector<int> &a) {
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i];
    return ans;
}

long long sum3(std::vector<int> &a) {
    long long ans = 0;
    for (std::vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
        ans += *iter; // iterators should be used like a pointer
    return ans;
}
