class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> hash;
        if (s.length() < t.length()) {
            return "";
        }
        int req = t.size();
        for (auto& it : t) {
            hash[it]++;
        }
        int st = 0;
        int window_size = INT_MAX;
        int j = 0, i = 0, n = s.length();
        while (j < n) {
            // agar sub kuch hai map mein...
            if (hash[s[j]] > 0) {
                req--;
            }

            // condition to be ... shirink...
            while (req == 0 && i <= j) {
                int curr = j - i + 1;
                if (window_size > curr) {
                    st = i;
                    window_size = min(window_size, curr);
                }
                hash[s[i]]++;
                if (hash[s[i]] > 0) {
                    req++;
                }
                i++;
            }
            hash[s[j]]--;
            j++;
        }

        if (window_size == INT_MAX) {
            return "";
        }
        return s.substr(st, window_size);
    }
};