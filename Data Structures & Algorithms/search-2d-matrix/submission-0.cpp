class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int top = 0;
        int bot = ROWS-1;
        int row{};
        while (top <= bot) {
            row = (top+bot)/2;

            if (target < matrix[row][0]) {
                bot = row - 1; 
            } else if (target > matrix[row][COLS-1]) {
                top = row + 1;
            } else {
                break;
            }

        }

        int left = 0, right = COLS-1; 
        while (left <= right) {
            int mid = (left + right)/2;
            if (target == matrix[row][mid]) {
                return true;
            } else if (target < matrix[row][mid]) {
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        return false; 

    }
};
