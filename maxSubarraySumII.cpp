#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long num;
        cin >> num;
        prefix[i] = prefix[i - 1] + num;
    }

    long long max_sum = LLONG_MIN;

    for (int i = a; i <= n; i++) {
        int earliest_start = max(0, i - b);
        int latest_start = i - a;

        for (int j = earliest_start; j <= latest_start; j++) {
            max_sum = max(max_sum, prefix[i] - prefix[j]);
        }
    }

    cout << max_sum << endl;
    return 0;
}
