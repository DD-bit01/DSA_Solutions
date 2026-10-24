class Solution {
public:
    int cal(string s ){
        int arr[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     int month=(s[0]-'0')*10+s[1]-'0';
     int day =(s[3]-'0')*10+s[4]-'0';
     
     for(int i=0;i<month-1;i++){
        day+=arr[i];
     }
return day;

    }



    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
 int al = cal(arriveAlice);
        int ll = cal(leaveAlice);
        int ab = cal(arriveBob);
        int lb = cal(leaveBob);

        int start = max(al, ab);
        int end = min(ll, lb);

        return max(0, end - start + 1);
    }
};