class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            unordered_set<char> s;
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]!='.')
                {
                    if(s.find(board[i][j])!=s.end())
                {
                    return false;
                }
                else
                {
                    s.insert(board[i][j]);
                }
                }
            }
        }
        for(int i=0;i<board.size();i++)
        {
            unordered_set<char> s;
            for(int j=0;j<board.size();j++)
            {
                if(board[j][i]!='.')
                {
                    if(s.find(board[j][i])!=s.end())
                {
                    return false;
                }
                else
                {
                    s.insert(board[j][i]);
                }
                }
            }
        }
        for(int row=0;row<board.size();row=row+3)
        {
            for(int col=0;col<board.size();col=col+3)
            {
                unordered_set<char> s;
                for(int i=row;i<row+3;i++)
                {
                    for(int j=col;j<col+3;j++)
                    {
                        if(board[i][j]!='.')
                        {
                            if(s.find(board[i][j])!=s.end())
                {
                    return false;
                }
                else
                {
                    s.insert(board[i][j]);
                }
                        }
                    }
                }
            }
        }
        return true;
    }
};
