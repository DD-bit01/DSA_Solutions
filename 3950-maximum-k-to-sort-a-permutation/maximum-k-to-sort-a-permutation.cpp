class Solution {
public:
    int sortPermutation(vector<int>& nums) {
     

     vector<int> ans=nums;
     sort(ans.begin(),ans.end());
     if(nums==ans) return 0;
     int temp=-1;
     for(int i=0;i<nums.size();i++ ){

if(nums[i]!=ans[i]){
   temp=temp&nums[i];
}

     }


return temp;

        
    }
};