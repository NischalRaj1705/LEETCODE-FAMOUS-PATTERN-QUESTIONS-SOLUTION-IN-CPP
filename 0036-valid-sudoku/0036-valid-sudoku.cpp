class Solution {
public:
    bool row(vector<vector<char>>& board) {
        unordered_set<char> sq;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (sq.find(board[i][j]) != sq.end()) {
                    return false;
                }
                sq.insert(board[i][j]);
            }
            sq.clear();
        }
        return true;
    }
    bool nine_to_nine(vector<vector<char>>& board) {
        unordered_set<char> sq;
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        if (board[r][c] == '.') {
                            continue;
                        }
                        if (sq.find(board[r][c]) != sq.end()) {
                            return false;
                        }
                        sq.insert(board[r][c]);
                    }
                }
                sq.clear();
            }
        }
        return true;
    }
    bool col(vector<vector<char>>& board) {
        unordered_set<char> sq;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[j][i] == '.') {
                    continue;
                }
                if (sq.find(board[j][i]) != sq.end()) {
                    return false;
                }
                sq.insert(board[j][i]);
            }
            sq.clear();
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return col(board) && row(board) && nine_to_nine(board);
    }
};