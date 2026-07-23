class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        vector<int>memcrash;
        int i=1;
        int crash=0;
        while(crash!=1){
        if(memory1<i && memory2<i){
           crash=1;
           break;
        }
          else if(memory1>=memory2){
                memory1-=i;
          }
          else{
            memory2-=i;
          }
        i++;
        }
            memcrash.push_back(i);
            memcrash.push_back(memory1);
            memcrash.push_back(memory2);
        
        return memcrash;
    }
};