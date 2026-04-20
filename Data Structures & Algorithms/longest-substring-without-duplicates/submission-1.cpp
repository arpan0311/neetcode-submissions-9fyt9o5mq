class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int maxi=0;
        unordered_map<char,int>hash;

        while(i<s.length()){
            hash[s[i]]++;

            while(hash[s[i]]>1&&j<s.length()){
                hash[s[j]]--;
                j++;
            }
            maxi=max(maxi,i-j+1);
            i++;
        }
        return maxi;
    }
};
