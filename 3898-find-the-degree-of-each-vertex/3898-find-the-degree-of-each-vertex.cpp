class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n;
        n= matrix.size();
        vector<int> answer(n,0);
for(int i=0;i<n;i++){
    for(int j=0; j<n;j++){
                answer[i]+=matrix[i][j];
            }
        }
        return answer;
    }
};