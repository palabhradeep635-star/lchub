class Solution {
public:
    int xorOperation(int n, int start) {
        int bs=0;
        int nums[n];
        int j = start;
        for(int i=0;i<n;i++){
            nums[i]= start + 2 * i;
          
        }
        
        for(int i=0;i<n;i++){
            bs^=nums[i];
        }
        return bs;
    }
};