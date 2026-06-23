class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> cs;

        for (string sentence : sentences) {
            int count = 1;

            for (char ch : sentence) {
                if (ch == ' ') {
                    count++;
                }
            }

            cs.push_back(count);
        }

        sort(cs.begin(), cs.end());

        return cs.back();
    }
};