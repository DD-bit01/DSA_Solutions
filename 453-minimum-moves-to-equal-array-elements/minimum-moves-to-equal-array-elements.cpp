class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx=INT_MIN;
        int n=nums.size();
        int minn=INT_MAX;
        for(int i = 0; i < n; i++) {
            minn = min(minn, nums[i]);
        }

        int moves = 0;

        for(int i = 0; i < n; i++) {
            moves += nums[i] - minn;
        }

        return moves;
        
    }
};