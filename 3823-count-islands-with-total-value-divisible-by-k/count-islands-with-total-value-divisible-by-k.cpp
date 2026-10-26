class Solution {
public:
   void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis, int i, int j, long long &sum){
    int r=grid.size();
    int c=grid[0].size();
    vis[i][j]=1;
    sum+=grid[i][j];
    
    int r1[]={-1,1,0,0};
    int c1[]={0,0,-1,1};
    for(int k=0;k<4;k++){
    int new_r=i+r1[k];
    int new_c=j+c1[k];
    if(new_r>=0&&new_r<r&&new_c>=0&&new_c<c&&grid[new_r][new_c]!=0&&!vis[new_r][new_c]){
        dfs(grid,vis,new_r,new_c,sum);
    }
    }
   }







    int countIslands(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
    vector<vector<int>>vis(r,vector<int>(c,0));
    int cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]!=0&&!vis[i][j]){
                long long sum=0;
                 dfs(grid,vis,i,j,sum);
                 if(sum%k==0) cnt++;
            }
        }
    }

    

return cnt;

    }
};