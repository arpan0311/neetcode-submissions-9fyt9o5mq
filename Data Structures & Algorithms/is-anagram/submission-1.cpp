class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>hash1,hash2;
        for(int i=0;i<s.length();i++){
            hash1[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            hash2[t[j]]++;
        }
        for(auto&it:hash1){
            if(hash2.find(it.first)==hash2.end()){
                return false;
            }
            else if(it.second!=hash2[it.first]){
                return false;
            }
        }
        return  true;
    }
};
