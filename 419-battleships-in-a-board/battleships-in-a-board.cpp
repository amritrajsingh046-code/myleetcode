class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<bool>>&vis,vector<vector<char>>& board){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || board[i][j]=='.'){
            return;
        }
        vis[i][j]=true;
        dfs(i+1,j,n,m,vis,board);
        dfs(i-1,j,n,m,vis,board);
        dfs(i,j+1,n,m,vis,board);
        dfs(i,j-1,n,m,vis,board);
        
    }
    int countBattleships(vector<vector<char>>& board) {
       
        int battleship=0;
        int n=board.size();
        int m=board[0].size();
         vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'&&!vis[i][j]){
                    dfs(i,j,n,m,vis,board);
                    battleship++;
                }
            }
        }
        return battleship;
    }
};