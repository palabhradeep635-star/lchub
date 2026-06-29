class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int cs=0, count=0;
    int streak=0;
        int n = nums.size();
        for(int i=0; i<n;i++){
            if(nums[i]==1){
                count++;
                cs=count;
                streak=max(cs,streak);
            }
            else {
                count=0;
            }
        }
        return streak;
    }
};