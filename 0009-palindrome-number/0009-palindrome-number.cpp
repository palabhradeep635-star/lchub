class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int num=x;
        while(x>0){
            int r;
            r=x%10;
             x=x/10;
            rev=rev*10+r;
        }
if(rev==num && INT_MIN<rev<INT_MAX){
    return 1;
}
else{
    return 0;
}
    }
};