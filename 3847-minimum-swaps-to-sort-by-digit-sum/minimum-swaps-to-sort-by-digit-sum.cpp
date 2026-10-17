class Solution {
public:
   static int summ(int x){
        int sum=0;
          int temp=x;
          while(temp>0){
            sum+=temp%10;
            temp=temp/10;
          } 
       return sum;   
    }

    int minSwaps(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        vector<int>v(nums);
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        auto lambda=[](int num1,int num2){
            int sum1=summ(num1);
            int sum2=summ(num2);

            if(sum1!=sum2) return sum1<sum2;
            return num1<num2;
        };
        sort(v.begin(),v.end(),lambda);
        
        int cnt=0;
      for(int i=0;i<n;i++){
        int exp=v[i];
        int curr=nums[i];
        if(curr!=exp){
       int idx=m[exp];
       nums[i]=exp;
       nums[idx]=curr;
       m[curr]=idx;
       m[exp]=i;
       cnt++;



        }





      }
        

return cnt;


    }
};