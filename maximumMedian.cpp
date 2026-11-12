#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
bool check_mid(long long mid, int n, long long k, vector<int>&in9){
long long operations_needed = 0;
 
for ( long long i = n/2;i<n;i++){
    if(in9[i]<mid){
        operations_needed += (mid - in9[i]);
    }
                    
}
 if(operations_needed <=k){
        return true;
    }else{ return false;
         }
 
    return true;}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write C++ code here
    
   int n,k;
    cin>>n>>k;
        
    vector<int>in9(n);
        for(int i=0; i<n;i++){
        cin>>in9[i];
    }
    sort(in9.begin(), in9.end());
    int current_med = in9[n/2];
    long long low = current_med;
    long long high = in9[n-1] + k;
    long long ans = low;
    while(low <= high){
       long long mid = (low + high)/2;
        check_mid(mid, n, k, in9);
        if(check_mid(mid, n, k, in9) == true){
           low = mid + 1; 
           ans  = mid;
    }
   
     else{
            high = mid - 1;
        }
        
    }
   cout <<ans<<endl;
    return 0;
}