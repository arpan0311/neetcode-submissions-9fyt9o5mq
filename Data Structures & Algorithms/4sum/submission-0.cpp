class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n = nums.size();
        if(nums.size()<4){
            return {};
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {
                unordered_map<int, int> hash;
                // hash[0] = 1;
                for (int k = j + 1; k < n; k++) {
              
                    long long sum = 1LL * nums[i] + nums[j] + nums[k];
                    long long need = 1LL * target - sum;

                    // only search if need fits in int
                    if (need >= INT_MIN && need <= INT_MAX) {
                        if (hash.find((int)need) != hash.end()) {
                            vector<int> temp = {nums[i], nums[j], nums[k], (int)need};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }

                    hash[nums[k]]++;
                }
               
            }
        }

        vector<vector<int>> res(st.begin(), st.end());
        return res;
    }
};