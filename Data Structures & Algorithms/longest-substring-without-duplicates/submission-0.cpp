class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>hash;
            for(int j=i;j<s.length();j++){
                // means hai isme 
                if(hash.find(s[j])!=hash.end()){
                    maxi=max(maxi,(int)(hash.size()));
                    break;
                }
                hash[s[j]]++;
                maxi=max(maxi,(int)(hash.size()));
            }
        }
        return maxi;
    }
};
