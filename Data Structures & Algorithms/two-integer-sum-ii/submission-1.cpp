class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {
        // two pointer//
        int n=numbers.size();
        int i=0,j=n-1;
        vector<int>answer;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum<k){
                i++;
            }
            else if(sum>k){
                j--;
            }
            else{
                answer.push_back(i+1);
                answer.push_back(j+1);
                return answer;
            }
        }
        return {};
    }
};
