class Solution {
public:
    string triangleType(vector<int>& nums) {
            string result;
            if(nums[0]==nums[1]&&nums[1]==nums[2]){
                result= "equilateral";
            }
           
            else if(nums[0]+nums[1]>nums[2]&&nums[1]+nums[2]>nums[0]&&nums[0]+nums[2]>nums[1]){
                if(nums[0]==nums[1]||nums[1]==nums[2]||nums[0]==nums[2]){
                result= "isosceles";
            } 
                else
                result ="scalene";
            }
            else{
                result ="none";
            }
            return result;
        
    }
};