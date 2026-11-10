class Solution {

int solve(int total,int curr,vector<int>&costs,vector<int>&dp){
    
    if (curr == total) return 0;
    if(dp[curr]!=-1) return dp[curr];
   int step1 = 1e9, step2 = 1e9, step3 = 1e9;
    if (curr + 1 <= total)
        step1 = costs[curr] + 1 +
                solve(total, curr + 1, costs,dp);

    if (curr + 2 <= total)
        step2 = costs[curr + 1] + 4 +
                solve(total, curr + 2, costs,dp);

    if (curr + 3 <= total)
        step3 = costs[curr + 2] + 9 +
                solve(total, curr + 3, costs,dp);

   return dp[curr]= min(step1,min(step2,step3));

}


public:
    int climbStairs(int n, vector<int>& costs) {
      vector<int>dp(n,-1);


        return solve(n,0,costs,dp);
        
    }
};