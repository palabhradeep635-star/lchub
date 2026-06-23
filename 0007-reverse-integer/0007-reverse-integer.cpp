class Solution {
public:
    int reverse(int x) {
     long long int rev=0;
     while(x!=0){
            int r;
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(rev>INT_MAX){
            rev=0;
        }
        else if(rev<INT_MIN){
            rev=0;
        }
        return rev;
    }
};