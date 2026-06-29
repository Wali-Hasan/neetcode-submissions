class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.length()-1; 
        bool skip = false; 
        while (l<r) {
            if (s[l] == s[r]) {
                l++;
                r--; 
            } else {
                return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
            }
        }
        return true; 
        
    }

private:
    bool isPalindrome(string& s, int l, int r) {

        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true; 
    }
};