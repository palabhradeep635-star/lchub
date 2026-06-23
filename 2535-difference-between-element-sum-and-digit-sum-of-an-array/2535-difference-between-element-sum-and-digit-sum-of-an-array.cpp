class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int es=0;
    int ds=0;   
    for(int i=0;i<nums.size();i++){
        es+=nums[i];
   
        while(nums[i]%10000000000000!=0){
                 int n=0;
            n=nums[i]%10;
            ds+=n;
            nums[i]=nums[i]/10;
            }
        }
    int result=0;
    if(es>ds){
        result= es-ds;
    }
    else{
        result=ds-es;
    }
    return result;
    }
};