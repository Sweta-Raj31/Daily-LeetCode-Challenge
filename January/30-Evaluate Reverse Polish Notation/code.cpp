
class Solution {
public:
static bool isNotNumber(const string &a) {
        try {
            return stoi(a)>=-200 && stoi(a)<=200;
        } catch (...) {
            return false;  
        }
    }
    int evalRPN(vector<string>& tokens) {
        int n= tokens.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (!isNotNumber(tokens[i])) {
                int k1 = st.top();
                st.pop();
                int k2 = st.top();
                st.pop();
                if (tokens[i] == "+") {
                    st.push(k1 + k2);
                } else if (tokens[i] == "-") {
                    st.push(k2 - k1);  
                } else if (tokens[i] == "*") {
                    st.push(k1 * k2);
                } else if (tokens[i] == "/") {
                    st.push(k2 / k1);
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};
