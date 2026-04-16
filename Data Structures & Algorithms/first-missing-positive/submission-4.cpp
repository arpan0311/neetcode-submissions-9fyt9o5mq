class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool isone=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                isone=true;
            }
            else if(nums[i]<=0||nums[i]>nums.size()){
                nums[i]=1;
            }
        }
        if(!isone){
            return 1;
        }
        for(int i=0;i<nums.size();i++){
            int val=abs(nums[i]);
            if(nums[val-1]<0){
                continue;
            }
            nums[val-1]=-nums[val-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                return i+1;
            }
        }
        return int(nums.size())+1;
    }
};