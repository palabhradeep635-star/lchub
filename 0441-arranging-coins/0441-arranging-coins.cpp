class Solution {
public:
    int arrangeCoins(int n) {
        int r;
        int sum=0;
        int i =1;
     int count=0;
        while(n-sum>=i){
            if(n-sum<=0){
           break;
            }
            else{
             sum+=i;
            count++;
            i++;
            }
        }
        return count;
    }
};