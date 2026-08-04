class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n-1;i++){
                if(nums[i]+1!=nums[i+1]){
                    for(int val = nums[i]+1;val<nums[i+1];val++){
                    ans.push_back(val);
                    }
                }
        }
        return ans;
    }
};