class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>hash;

        for(int i=0;i<s1.length();i++){
            hash[s1[i]]++;
        }

        for(int i=0;i<s2.length();i++){
            if(hash.find(s2[i])==hash.end()){
                continue;
            }
            unordered_map<char,int>hash1;
            for(int j=i;j<i+s1.length()&&j<s2.length();j++){
                hash1[s2[j]]++;
            }
            if(hash1==hash){
                return true;
            }
        }
            return false;
    }
};