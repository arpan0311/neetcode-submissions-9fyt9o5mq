class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        unordered_map<char, int> hash;
        int maxi = 0;
        int res = 0;
        while (r < s.length()) {
            hash[s[r]]++;
            maxi = max(maxi, hash[s[r]]);
            while ((r - l + 1) - maxi > k) {
                hash[s[l]]--;
                maxi = 0;
                for (auto& it : hash) {
                    maxi = max(maxi, it.second);
                }
                l++;
            }

            if ((r - l + 1) - maxi <= k) {
                res = max(res, (r - l + 1));
            }

            r++;
        }

        return res;
    }
};