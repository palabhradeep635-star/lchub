class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>rfo;
        int n1=order.size();
        int n2= friends.size();
        for(int i=0; i<n1;i++){
            for(int j=0; j<n2;j++){
                if(order[i]==friends[j]){
                    rfo.push_back(order[i]);
                }
            }
        }
        return rfo;
    }
};