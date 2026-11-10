/**
 Reminder: Use Recursion
 */
 #include <string>

using namespace std;
    
   bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
             
                if(s[left+ 1] != s[right])||(s[left] != s[right+1]){
                    return true;
            }
            left++;
            right--;

        }
        return true;
   
            
            left++;
            right--;
        }
      return true;
    
    }

