class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>c;
       
        for(int i=0;i<sentences.size();i++){
             int count =0;
            for(int j=0;j<sentences[i].size();j++){
            count++;

        }
        c.push_back(count);
    }
    sort(c.begin(),c.end());
    
return c.back() ;
    }
};