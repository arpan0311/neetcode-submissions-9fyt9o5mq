class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
       priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto&it:hash){
            pq.push({it.second,it.first});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>answer;
        while(!pq.empty()){
            answer.push_back(pq.top().second);
            pq.pop();
        }

       return answer;
    }
};
