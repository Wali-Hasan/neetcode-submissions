class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        col_sets = [set() for _ in range(9)] 
        sq_sets = [set() for _ in range(9)]
        for r in range(9):
            row_set = set()
            for c in range(9):
                if board[r][c] != ".":
                    if board[r][c] in row_set:
                        return False
                    if board[r][c] in col_sets[c]:
                        return False
                    sq = self._pos_to_sq(r, c)
                    print(sq)
                    if board[r][c] in sq_sets[sq]:
                        return False
                    row_set.add(board[r][c])
                    col_sets[c].add(board[r][c])
                    sq_sets[sq].add(board[r][c])
        return True
                    
    def _pos_to_sq(self, r: int, c:int):
        sq_row = r // 3
        sq_col = c // 3
        return sq_row*3 + sq_col


        