class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (string op : operations) {
            if (op == "+") {
                int val = record[record.size() - 1] +
                          record[record.size() - 2];
                record.push_back(val);
            }
            else if (op == "D") {
                record.push_back(2 * record.back());
            }
            else if (op == "C") {
                record.pop_back();
            }
            else {
                record.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int x : record) {
            sum += x;
        }

        return sum;
    }
};