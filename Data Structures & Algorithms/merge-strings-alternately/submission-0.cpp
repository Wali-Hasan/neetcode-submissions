class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i{};
        string res{""};
        while (i < word1.length() && i < word2.length()) {
            res = res + word1[i] + word2[i];
            i++;
        }
        while (i < word1.length()) {
            res+=word1[i];
            i++;
        }
        while (i < word2.length()) {
            res+=word2[i];
            i++;
        }
        return res; 
        
    }
};