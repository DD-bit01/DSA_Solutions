class Solution {
public:
    int minInsertions(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cnt++;
            else{
               if(cnt<=0){
                ans++;
                cnt++;
               }
                if(cnt>0){
                    if(s[i+1]==')'){
                        i++;
                        cnt--;
                    }
                    else{
                        ans++;
                        cnt--;
                    }
                }
               
            }
        }
        return ans+2*cnt;
    }
};