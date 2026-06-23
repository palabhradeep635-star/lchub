#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        for (char c : str) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        // ✅ Always return something here
        return st.empty();
    }
};
