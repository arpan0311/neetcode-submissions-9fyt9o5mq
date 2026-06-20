class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int val=abs(nums[i]);
            if(nums[val-1]<0){
                return abs(nums[i]);
            }
            nums[val-1]=-1*nums[val-1];
        }
        return -1;
    }
};
