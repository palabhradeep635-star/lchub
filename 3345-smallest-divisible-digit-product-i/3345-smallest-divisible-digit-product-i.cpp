class Solution {
public:
    int smallestNumber(int n, int t) {
        int ld;
        int ans;
  
for(int i= n; i<n+10;i++){
      int p=1;
      int num=i;
    while(num>0){
        ld=num%10;
        num=num/10;
        p*=ld;
    }
    if(p%t==0){
        ans=i;
        break;

    }
    
       
    }
    return ans;
    }
};