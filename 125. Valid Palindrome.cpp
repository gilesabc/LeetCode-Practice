class Solution {
public:
    bool isPalindrome(string s) {
        // two pointers
        int l = 0;
        int r = s.size()-1;
        while(l < r){
            if(!isalpha(s[l])){
                l++;
                continue;
                }
            if(!isalpha(s[r])){
                r--;
                continue;
                }
            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};