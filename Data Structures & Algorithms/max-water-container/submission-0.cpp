class Solution {
public:
    int maxArea(vector<int>& nums) {
    //    two pointer se try kro
    int maxi=0;
    int i=0,j=nums.size()-1;

    while(i<j){
        int dist=j-i;
        int mini=min(nums[i],nums[j]);
        maxi=max(maxi,mini*dist);
        // where to move 
        if(nums[i]<nums[j]){
            i++;
        }
        else{
            j--;
        }
    }
        return maxi;
    }
};
