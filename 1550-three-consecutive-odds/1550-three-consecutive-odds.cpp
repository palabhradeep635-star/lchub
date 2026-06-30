class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int ans=0;
        int n= arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
                if(count==3){
                    ans=1;
                }
            }
            else{
                count=0;
            }
        }
        return ans;
        
    }
};