class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int size =m+n;
        int j=0;
     for(int i=0;i<n;i++){

            nums1[m+i]=nums2[j];
            j++;
            
          
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<size-i-1;j++){
                if(nums1[j]>nums1[j+1]){
                    swap(nums1[j],nums1[j+1]);
                }
            }
        }
  for(int i=0;i<size;i++){
    cout<<nums1[i];
  }
    }
};