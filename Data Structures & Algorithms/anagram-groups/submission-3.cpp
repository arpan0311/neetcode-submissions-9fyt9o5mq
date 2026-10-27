class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_set<int>st;
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++){
            if(st.count(i)){
                continue;
            }
            vector<string>ans;
            string curr=strs[i];
            st.insert(i);
            ans.push_back(strs[i]);
            sort(curr.begin(),curr.end()); // this is O(1) opr 
            for(int j=i+1;j<strs.size();j++){
                if(st.count(j)){
                continue;
            }
                string curr_str=strs[j];
                sort(curr_str.begin(),curr_str.end());
                if(curr_str==curr){
                    st.insert(j);
                    ans.push_back(strs[j]);
                }
            }
            res.push_back(ans);

        }
        return res;
    }
};
