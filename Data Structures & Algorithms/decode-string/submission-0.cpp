class Solution {
public:
    string decodeString(string s) {
        stack<int> st;
        stack<string> strstk;
        int num = 0;
        string curr = "";
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            } else if (s[i] == '[') {
                st.push(num);
                strstk.push(curr);
                curr = "";
                num = 0;
            } else if (s[i] == ']') {
                // make whole string
                int n = 1;

                if (!st.empty()) {
                    n = st.top();
                    st.pop();
                }
                int j = 0;
                string prev = strstk.top();
                strstk.pop();
                string new1 = "";
                while (j < n) {
                    new1 += curr;
                    j++;
                }
                curr = prev + new1;
            } else {
                curr += s[i];
            }
        }
        return curr;
    }
};