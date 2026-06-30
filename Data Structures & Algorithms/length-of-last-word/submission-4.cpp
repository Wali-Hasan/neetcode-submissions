class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = s.length()-1;
        while (s[r] == ' ') {
            r--; 
        }
        
        int l = r; 
        while (l >= 0 && s[l] != ' ') {
            l--;
        }
        cout << l << ' ' << r;
        return (r-l); 

    }
};