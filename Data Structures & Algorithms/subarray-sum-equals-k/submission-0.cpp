class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int i=0,j=0;
        int sum=0;
        unordered_map<int,int>hash;
        hash[0]=1;
        while(j<nums.size()){
            sum+=nums[j];
            cout<<sum<<" ";
            int rest=sum-k;
            if(hash.find(rest)!=hash.end()){
                cnt+=hash[rest];
            }
            hash[sum]++;
            j++;
        }
        return cnt;
    }
};