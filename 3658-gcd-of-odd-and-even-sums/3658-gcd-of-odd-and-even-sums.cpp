class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so=0;
        int se=0;
        int odd=1;
        int even=2;
        int count=0;
        int i=2;
        while(count<n){
            se+=even;
            so+=odd;
            even+=2;
            odd+=2;
            count++;
        }
        return abs(se-so);
    }
};