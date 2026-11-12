class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
    int l=0;
    int r=1;
    int n=nums.size();
    if(n==1) return 1;
    int maxx=INT_MIN;
    int flag=0;
    while(r<n){
    if(nums[r]<=nums[r-1]){
        l=r;
    }
    maxx=max(r-l+1,maxx);
    r++;
    }

    l=0;
    r=1;
while(r<n){
    if(nums[r]>=nums[r-1]){
        l=r;
    }

    maxx=max(r-l+1,maxx);
    r++;
    }

  return maxx;      
    }
};