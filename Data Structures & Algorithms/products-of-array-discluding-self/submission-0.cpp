class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefix(n,-1);
        vector<long long>suffix(n,-1);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i]*suffix[i+1];
        }
        vector<int>answer;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                answer.push_back(suffix[i+1]);
            }
            else if(i==n-1){
                answer.push_back(prefix[i-1]);
            }
            else{
                answer.push_back(prefix[i-1]*suffix[i+1]);
            }
        }
        return answer;
    }
};
