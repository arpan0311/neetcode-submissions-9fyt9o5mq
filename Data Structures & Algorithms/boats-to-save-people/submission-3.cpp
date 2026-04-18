class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        int i=0,j=nums.size()-1;
        int cnt=0;
        sort(nums.begin(),nums.end());
        while(i<=j){
            if(nums[i]+nums[j]<=k){
                i++;
            }
            cnt++;
            j--; 
        }
        return cnt;
    }
};