class NumMatrix {
public:
    vector<vector<int>> m{};
    NumMatrix(vector<vector<int>>& matrix) {
        m = matrix; 
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res{};

        for (int r{row1}; r <= row2; r++) {
            for (int c{col1}; c<= col2; c++) {
                res += m[r][c]; 
            }
        }
        return res; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */