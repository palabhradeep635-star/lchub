class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int ans;
        for(int i=1;i<=n;i++){
            int r= k*i;
            bool a=false;
            for (int j=0; j<n;j++){
            if(nums[j]==r){
             a= true;
            }
            }
            if(a== false){
                return r;
                ans=r;
                break;
            }

        }
        return ans;
    }
};