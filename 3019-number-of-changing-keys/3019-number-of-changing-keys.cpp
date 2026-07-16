class Solution {
public:
    int countKeyChanges(string s) {

      int n= s.size();
    
      int count=0;
        for (char &c : s) {
        c = toupper(c);
        }
        int s1= int(s[0]);
      for(int i=0;i<n;i++){
        if(s1!=int(s[i])){
            count++;
            s1=int(s[i]);
        }
      }
      return count;
    }
};