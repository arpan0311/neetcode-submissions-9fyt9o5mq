class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int j=nums[0].size();
            if(nums[i][j-1]<target){
                continue;
            }
            int low=0,high=j-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[i][mid]==target){
                    return true;
                }
                else if(nums[i][mid]<target){
                    low=mid+1;
                }
                else{ 
                    high=mid-1;
                }
            }
        }
        return false;
    }
};