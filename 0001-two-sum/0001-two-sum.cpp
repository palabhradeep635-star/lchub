class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ts;
       int n= nums.size();
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = nums[i]+nums[j];
        if(sum ==target){
            ts.push_back(i);
            ts.push_back(j);
       return ts ;  
        }
        }
       }
       return ts ;  
    }
};