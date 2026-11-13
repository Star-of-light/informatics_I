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
            valid = false;
                break;
            }
        }

        if (valid) {
            for (int i = s.size() / 2; i < s.size(); i++) {
                if (stac.empty()) {
                    valid = false;
                    break;
                }
        if ((stac.top() == '(' && s[i] == ')') ||
                    (stac.top() == '{' && s[i] == '}') ||
                    (stac.top() == '[' && s[i] == ']')) {
                    stac.pop();
                } else {
                    valid = false;
                    break;
                }

                    }
        }
    }

  
    if (valid && stac.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
