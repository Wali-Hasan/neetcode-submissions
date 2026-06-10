class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> colSets(9);
        vector<unordered_set<char>> sqSets(9);

        for (int r{}; r < board.size(); r++) {
            unordered_set<char> rowSet{};
            for (int c{}; c < board.size(); c++) {
                if (board[r][c] == '.') continue;
                if (rowSet.contains(board[r][c])) return false;
                if (colSets[c].contains(board[r][c])) return false;
                int sq{(r/3)*3 + (c/3)};
                if (sqSets[sq].contains(board[r][c])) return false;
                rowSet.insert(board[r][c]);
 
                rowSet.insert(board[r][c]);
                colSets[c].insert(board[r][c]);
                 sqSets[sq].insert(board[r][c]);
            }
        }
        return true; 
        
        
    }
};
