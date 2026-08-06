class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int el1=INT_MIN;
      int el2=INT_MIN;
      int count1=0,count2=0;
        int n =nums.size();
        for(int i=0; i<n;i++){
            if(count1==0 && el2!=nums[i]){
                count1=1;
                el1=nums[i];
            }
            else if(count2==0 && el1!=nums[i]){
                count2=1;
                el2=nums[i];
            }
            else if(el1==nums[i]){
                count1++;
            }
            else if(el2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        vector<int> ans;
        for(int i =0; i<n;i++){
            if(el1==nums[i]){
                count1++;
            }
            else if(el2==nums[i]){
                count2++;
            }
        }
            int base= n/3;
            if(count1>base){
                ans.push_back(el1);
            }
            if(count2>base){
                ans.push_back(el2);
            }
            sort(ans.begin(),ans.end());
      return ans;

    }
};