class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>diff;
        for(int i=0;i<n;i++){
            if(i==0){
                int rs=0;
                for(int j=i+1;j<n;j++){
                    rs+=nums[j];
                   
                }
                 diff.push_back(rs);
            }
            else if(i==n-1){
                int ls=0;
                for(int j=0;j<i;j++){
                    ls+=nums[j];

                }
                diff.push_back(ls);
            }
            else{
                int ls=0;
                int rs=0;
                int mod;
                for(int j=0;j<i;j++){
                    ls+=nums[j];
                }
                for(int k=i+1;k<n;k++){
                    rs+=nums[k];
                }
                mod= abs(ls-rs);
                diff.push_back(mod);

            }

        }
        return diff;
    }
};