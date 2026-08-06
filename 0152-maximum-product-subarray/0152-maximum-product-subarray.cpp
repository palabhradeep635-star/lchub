class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mp= INT_MIN;
        int n= nums.size();
       for(int i=0 ; i<n;i++){
            int p=1;
            for(int j=i;j<n;j++){
            p*=nums[j];
            mp=max(mp,p);
            }
       }
       return mp; 
    }
};