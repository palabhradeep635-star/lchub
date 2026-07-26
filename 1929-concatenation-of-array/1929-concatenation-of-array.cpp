class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums1=nums;
        vector<int>nums2=nums;
        for(int i=0; i<nums.size();i++){
            nums1.push_back(nums2[i]);
        }
        return nums1;
    }
};