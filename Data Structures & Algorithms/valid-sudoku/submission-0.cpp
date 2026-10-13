class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> r[9], c[9], b[9];
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                int bi = i/3 * 3 + j/3;
                if (board[i][j] == '.') {
                    continue;
                }
                if (r[i].count(board[i][j])) {
                    return false;
                }
                if (c[j].count(board[i][j])) {
                    return false;
                }
                if (b[bi].count(board[i][j])) {
                    return false;
                }
                r[i].insert(board[i][j]);
                c[j].insert(board[i][j]);
                b[bi].insert(board[i][j]);
            }
        }
        return true;
    }
};
