class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=1;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>ans;
        for(auto&it:st){
            ans.push_back(it);
        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]+1==ans[i+1]){
                cnt++;
            }
            else {
                maxi=max(maxi,cnt);
                cnt=1;
            }
            maxi=max(maxi,cnt);

        }
        return maxi;
    }
};
