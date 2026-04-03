class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int> mp;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                int value=board[i][j]-'0';
                mp[value]++;
                if(mp[value]>1)
                {
                    return false;
                }
            }
            mp.clear();
        }
        mp.clear();
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')
                continue;
                int value=board[j][i]-'0';
                mp[value]++;
                if(mp[value]>1)
                {
                    return false;
                }
            }
            mp.clear();
        }
        for(int i=0;i<9;i++)
        {
            unordered_set<char>seen;
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    int r=(i/3)*3+j;
                    int c=(i%3)*3+k;
                    if(board[r][c]=='.')
                    continue;
                    if(seen.count(board[r][c]))
                    return false;
                    seen.insert(board[r][c]);
                }
            }
        }
        return true;
    }
};
