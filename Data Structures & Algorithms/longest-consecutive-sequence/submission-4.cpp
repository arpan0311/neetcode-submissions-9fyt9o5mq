class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int cnt=1;
        int maxi=1;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
    
        int i=0;
        for(auto&it:st){
            nums[i]=it;
            i++;
        }
        for(int i=0;i<st.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
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
