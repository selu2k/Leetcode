class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9),col(9),block(9);
        for(int i = 0 ; i<9 ; i++){
            for(int j = 0 ; j<9 ; j++){
                if(board[i][j] == '.') continue;
                int cur = board[i][j]-'0';
                int k = (i/3)*3 + j/3;
                if(row[i].count(cur) or col[j].count(cur) or block[k].count(cur)) return false;
                row[i].insert(cur);
                col[j].insert(cur);
                block[k].insert(cur);
            }
        }
        return true;
    }
};