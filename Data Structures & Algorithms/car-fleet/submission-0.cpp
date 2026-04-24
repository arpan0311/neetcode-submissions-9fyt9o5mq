class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> time;
        for (int i = 0; i < n; i++) {
            double t = (double)(target - position[i]) / speed[i];
            time.push_back({position[i], t});
        }
        sort(time.rbegin(), time.rend());
        stack<double> st;
        for (auto& it : time) {
            cout << it.first << " " << it.second << " ";
            cout << endl;
        }
        for (auto& it : time) {
            if (st.empty()) {
                st.push(it.second);
            } else if (st.top() < it.second) {
                st.push(it.second);
            }
        }
        return (int)st.size();
    }
};