class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int result;
        int count=0;
        while(num%10!=0){
            int r;
            r=num%10;
            num=num/10;
            if(n%r==0){
            count++;
            }
        }
        return count;
    }
};