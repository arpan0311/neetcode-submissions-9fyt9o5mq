class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // I have to create min heap
    priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            int mini=abs(arr[i]-x);
            pq.push({mini,arr[i]});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};