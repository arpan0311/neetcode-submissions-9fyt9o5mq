class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s += to_string(strs[i].length()) + '@' + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
    vector<string> answer;
    int i = 0;

    while(i < s.length()) {
        int j = i;

        // find '@'
        while(s[j] != '@') j++;

        int len = stoi(s.substr(i, j - i));//number h 

        string word = s.substr(j + 1, len);
        answer.push_back(word);

        i = j + 1 + len;
    }

    return answer;
}
};
