class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])!=hash.end()){
                return true;
            }
            hash[nums[i]]++;
        }

        return false;
    }
};