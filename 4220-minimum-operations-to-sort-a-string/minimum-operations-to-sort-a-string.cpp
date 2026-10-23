class Solution {
public:
    int minOperations(string s) {
        string temp=s;
        int n=s.size();
        sort(temp.begin(),temp.end());
        if(temp==s) return 0;
        char mn=s[0];
        char mx=s[n-1];
        char minn=s[0];
        char maxx=s[0];
   char min_mid = CHAR_MAX;
char max_mid = CHAR_MIN;
        for(int i=0;i<n;i++){
            minn=min(minn,s[i]);
            maxx=max(maxx,s[i]);
            if(i>0&&i<n-1){
                min_mid=min(min_mid,s[i]);
                max_mid=max(max_mid,s[i]);
            }
        }
         if (n == 2)
            return -1;

        if (s[0] == minn || s[n - 1] == maxx)
            return 1;

       if(s[0]>max_mid&&s[n-1]<min_mid){
        return 3;
       }

        return 2;
    }
};