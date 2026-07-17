class Solution {
public:
    int firstUniqChar(string s) {
        int n= s.size();
        char c;
    unordered_map<char,int>unique;
        for(int i=0; i<n;i++){
            unique[s[i]]++;
        }
        for(int i=0; i<n;i++){
            if(unique[s[i]]==1){
                return i;
            }
        }

        return -1;
    }
};