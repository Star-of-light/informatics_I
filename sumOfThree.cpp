#include <bits/stdc++.h>
using namespace std;

int main() {

   int n,x;
   cin>>n>>x;
    vector<int>inte(n);
    for(int i =  0; i<n;i++ ){
        cin>>inte[i];
    }
    sort(inte.begin(), inte.end());
    
    // int l = inte[0];
    // int r = inte[n - 1];
    
    for (int l = 0; l <=n - 3; l++) {
        
        int m = l + 1; 
        int r= inte[n-1];  
        
        while ( m < r) {
            int current_sum = inte[l] + inte[l] + inte[r];
            
            if (current_sum == x) {
                cout  << l<< " " << m << " " << r << inte[l] << inte[m] <<inte[r]<<endl;
                return 0;
            } 
            else if (current_sum < x) {
                m++; 
                        } 
            else {
                r--; 
        }
    }
    
    cout << "IMPOSSIBLE"<< endl;
    return 0;
}
 }