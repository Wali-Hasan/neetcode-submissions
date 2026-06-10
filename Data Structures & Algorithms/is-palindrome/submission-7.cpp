class Solution {
public:
    bool isPalindrome(string s) {
        size_t left{0};
        size_t right{s.size()-1};
        while (left < right) {
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true; 
    }

   
};
