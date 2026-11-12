#include <bits/stdc++.h>
using namespace std;

int freq[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = 0;              
    int unique_count = 0;    
    int best_a = 0, best_b = 0;

    
    for (int b = 0; b < n; b++) {
    
        if (freq[arr[b]] == 0) {
            unique_count++;
        }
        freq[arr[b]]++;

        
        while (unique_count > k) {
            freq[arr[a]]--;
            if (freq[arr[a]] == 0) {
                unique_count--;
            }
            a++;
        }

        if (b - a > best_b - best_a) {
            best_a = a;
            best_b = b;
        }
    }

    cout << best_a + 1 << " " << best_b + 1 << "\n";

    return 0;
}
