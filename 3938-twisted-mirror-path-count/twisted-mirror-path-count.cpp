class Solution {
public:
    int mod=1e9+7;
    int cnt(vector<vector<int>>& grid,int i,int j,int dir,vector<vector<vector<int>>>&dp){
    int r=grid.size();
    int c=grid[0].size();    
    if(i>=r||j>=c){
        return 0;
    }
    if(i==r-1&&j==c-1){
        return 1;
    }
    if(dp[i][j][dir]!=-1){
        return dp[i][j][dir];
    }
int ans=0;

    int right=0;
    int down=0; 
if(grid[i][j]==1){
 if(dir==1){
    ans=cnt(grid,i,j+1,0,dp);
 }
 else{
    ans=cnt(grid,i+1,j,1,dp);
 }



}
    else{
  
      right=cnt(grid,i,j+1,0,dp)%mod;

        down=cnt(grid,i+1,j,1,dp)%mod;
            ans= (right+down)%mod;
    }
return dp[i][j][dir]=ans;

    }


    int uniquePaths(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(2,-1)));
   return cnt(grid, 0, 0, 0,dp);
    }
};