class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n= s.size();
        char ch;
        for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    ch=t[i];
                    return ch;
                }
        }
        return t[n];
    }
};