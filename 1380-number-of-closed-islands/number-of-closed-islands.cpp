class Solution {
public:
   void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j){
vis[i][j]=1;
int r=grid.size();
int c=grid[0].size();
int r1[]={-1,+1,0,0};
int c1[]={0,0,-1,+1};
for(int k=0;k<4;k++){
   int new_r=i+r1[k];
   int new_c=j+c1[k];
   if(new_r>=0&&new_r<r&&new_c>=0&&new_c<c&&grid[new_r][new_c]==0&&!vis[new_r][new_c]){
    vis[new_r][new_c]=1;
    dfs(grid,vis,new_r,new_c);
   }
}
   }
    int closedIsland(vector<vector<int>>& grid) {
      int r=grid.size();
      int c=grid[0].size();
      vector<vector<int>>vis(r,vector<int>(c,0));
     for(int i=0;i<c;i++){
     if(grid[0][i]==0&&!vis[0][i]){
 dfs(grid,vis,0,i);
     }
     }
     for(int i=0;i<c;i++){
        if(grid[r-1][i]==0&&!vis[r-1][i]){
 dfs(grid,vis,r-1,i);
        }
     }
     for(int i=0;i<r;i++){
        if(grid[i][0]==0&&!vis[i][0]){
            dfs(grid,vis,i,0);
        }
     }
     for(int i=0;i<r;i++){
        if(grid[i][c-1]==0&&!vis[i][c-1]){
         dfs(grid,vis,i,c-1);
        }
     }
    int cnt=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]==0&&!vis[i][j]){
                cnt++;
                dfs(grid,vis,i,j);
            }
        }
    }


return cnt; 
    }
};