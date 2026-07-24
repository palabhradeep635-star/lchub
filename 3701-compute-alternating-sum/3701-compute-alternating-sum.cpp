class Solution {
public:
    int alternatingSum(vector<int>& nums) {
     int ans;
     int c=0;
     int sum=0;
     for(int i=0;i<nums.size();i++){
        if(c==0){
            sum+=nums[i];
            c=1;
        }
        else{
            sum+=-(nums[i]);
            c=0;
        }
     }
     return sum;

    }
};