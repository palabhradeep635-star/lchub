class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        int n=s.size();
        for(int i=0; i<n-1;i++){
            int j=i+1;
            int diff=int(s[i]-s[j]);
            score+=abs(diff);
        }
        return score;

    }
};