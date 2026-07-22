class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1= nums1.size();
        int s2= nums2.size();
        int s= s1+s2;
    vector<int>nums;
    for (int i = 0; i < s1; i++){
    nums.push_back(nums1[i]);
    }

for (int i = 0; i < s2; i++){
    nums.push_back(nums2[i]);
}
    sort(nums.begin(),nums.end());
     double median;
    if(s%2==0){
     median=(double(nums[s/2])+double(nums[s/2-1]))/2;
    }
    else{
     median=(double(nums[(s)/2]));
    }
    
    return median;
    }
};