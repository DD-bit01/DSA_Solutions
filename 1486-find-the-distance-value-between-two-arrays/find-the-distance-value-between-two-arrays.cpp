class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int maxx=arr2[0];
        for(int i=0;i<arr2.size();i++){
            maxx=max(maxx,arr2[i]);
        }
        int cnt=0;
        for(int i=0;i<arr1.size();i++){
            int fag=1;
           for(int j=0;j<arr2.size();j++){
            if(abs(arr1[i]-arr2[j])<=d){
             fag=0;
             break;
            }
           }
           if(fag) cnt++;
        }
        return cnt;
    }
};