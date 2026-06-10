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

    bool isAlnum(char c) {
        bool isAl = ((tolower(c) - 'a') < 26) && ((tolower(c) - 'a') >= 0);
        bool isNum = (c - '0') <= 9 && (c-'0') >=0;

        return isAl || isNum;
    }
};
