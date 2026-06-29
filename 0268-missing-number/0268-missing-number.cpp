class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
            int suma =0;
            int sumo= (n*(n+1))/2;
            for(int i=0; i<n;i++){
                suma+=nums[i];
            }
            int m;
            m=sumo-suma;
        return m;
    }
};