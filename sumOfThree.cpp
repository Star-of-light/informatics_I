#include <bits/stdc++.h>
using namespace std;

int main() {

   int n,x;
   cin>>n>>x;

     vector<pair<int, int>> inte(n);
   
    for (int i = 0; i < n; i++) {
        
        cin >> inte[i].first;

        inte[i].second = i + 1;
    }
     sort(inte.begin(), inte.end());
    
    
    
    for (int l = 0; l <=n - 3; l++) {
        
        int m = l + 1; 
        int r= n-1;  
        
        while ( m < r) {
            long long current_sum = inte[l] + inte[m] + inte[r];
            
            if (current_sum == x) {
                cout << inte[l].second << " " << inte[m].second << " " << inte[r].second << endl;
                return 0;
            } 
            else if (current_sum < x) {
                m++; 
                        } 
            else {
                r--; 
        }
    }
}   
    cout << "IMPOSSIBLE"<< endl;
    return 0;
}