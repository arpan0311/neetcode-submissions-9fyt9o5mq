class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>hash;

        for(int i=0;i<s1.length();i++){
            hash[s1[i]]++;
        }

        unordered_map<char,int>hash1;
        int i=0;
        int j=0;
        while(i<s2.size()){
            hash1[s2[i]]++;
            while(i-j+1>s1.length()){
              hash1[s2[j]]--;
              if(hash1[s2[j]]==0){
                hash1.erase(s2[j]);
              }
              j++;
            }
            if(hash1==hash){
                return true;
            }
            i++;
        }

        return false;
    }
};