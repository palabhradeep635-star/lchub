class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n>0){
                int r;
                r=n%10;
                sum+=r;
                n=n/10;
           
        }
        return sum;
    }
};