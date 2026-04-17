class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>hash;
       for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
       }
       vector<int>answer;
       for(auto&it:hash){
        if(it.second>(nums.size()/3)){
            answer.push_back(it.first);
        }
       }
       return answer;
    }
};