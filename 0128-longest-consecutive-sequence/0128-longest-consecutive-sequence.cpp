class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0){
            return{};
        }
        sort(nums.begin(),nums.end());
int lc=nums[0];
int count=1;
int maxcount=1;
        for(int i=0;i<n;i++){
            if(lc+1==nums[i]){
                count++;
                lc=nums[i];
            }
            else if(lc==nums[i]){
                continue;
            }
            else{
                lc=nums[i];
                count=1;
            }
                    maxcount=max(maxcount,count);
        }

        return maxcount;
    }
};