#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
     cin >> s;
     stack<char> stac;
     bool valid = true;

     if(s.size()%2 == 1){
        valid = false;
        return 0;
     }else{
     for(int i = 0; i< (s.size()/2); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stac.push(s[i]);
        }
         else{
            if(stac.empty()){
                valid = false;
                 return 0;
             }
            }
        }
             if(stac.top() !== s[s.size()/2]){
                valid = false;
                 return 0;
             }
             else{
                stac.pop();
                if(stac.top() ==)
             }
            
     }
    }
