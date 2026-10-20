class Solution {
public:
    int sumCounts(vector<int>& nums) {

        int n= nums.size();
         map<int,int> m;
          int sum=0;
         for(int i=0;i<n;i++){

         for(int j=i;j<n;j++){
     m[nums[j]]++;
     int x=m.size();
     sum+=(x*x);
         }
m.clear();
         }
        return sum;
    }
};