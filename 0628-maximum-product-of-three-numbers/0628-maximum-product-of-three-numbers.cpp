class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int p1,p2,p;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        p1=nums[n-3]*nums[n-2]*nums[n-1];
        p2=nums[0]*nums[1]*nums[n-1];
        p=max(p1,p2);
        return p;
    }
};