class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        int i=0;
        while(i<nums.size()&&zero>0){
            nums[i]=0;
            zero--;
            i++;
        }
          while(i<nums.size()&&one>0){
            nums[i]=1;
            one--;
            i++;
        }
          while(i<nums.size()&&two>0){
            nums[i]=2;
            two--;
            i++;
        }
    }
};