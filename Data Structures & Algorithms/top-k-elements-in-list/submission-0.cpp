class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>ans;
        int maxi=0;
        for(auto&it:hash){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second;
            cout<<endl;
        }
        reverse(ans.begin(),ans.end());
        vector<int>answer;
        for(int i=0;i<k;i++){
            answer.push_back(ans[i].second);
        }
        return answer;
    }
};
