class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> suff(arr.size());
        suff[arr.size()-1] = -1;
        for (int i = arr.size()-1; i>=1; i--) {
            if (arr[i] > suff[i]) {
                suff[i-1] = arr[i];
            } else {
                suff[i-1] = suff[i];
            }
        }
        return suff; 
    }
};