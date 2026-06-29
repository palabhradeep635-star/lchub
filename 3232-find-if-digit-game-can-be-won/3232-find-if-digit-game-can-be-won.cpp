class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single =0, couple=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<=9){
                single+= nums[i];
            }
            else if(nums[i]>=10){
                couple+= nums[i];
            }
        }
        if(single==couple){
            return 0;
        }
        else{
            return 1;
        }
    }
};