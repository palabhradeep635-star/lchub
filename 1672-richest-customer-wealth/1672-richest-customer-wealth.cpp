class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    
        vector<int> t;
        for(int i=0;i<accounts.size();i++){
            int total=0;
            for(int j=0;j<accounts[i].size();j++){
                total+=accounts[i][j];         
                t.push_back(total);
            }
   
        }
        int maxi=0;
        for(int i=0;i<t.size();i++){
            maxi=max(t[i],maxi);
            }
            return maxi;
    }
};