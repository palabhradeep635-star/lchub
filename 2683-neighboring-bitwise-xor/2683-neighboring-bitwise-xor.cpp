class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
      int n= derived.size();
      int ans=derived[0];  
      for(int i=1; i<n;i++){
        ans^=derived[i];
      }
     if(ans==1){
        return false;
     }
     else{
        return true;
     }
    }
};