class Solution {
public:
    void merge(vector<int>&nums,int s,int mid,int n){
        vector<int>temp;
        int i=s,j=mid+1;
        while(i<mid+1&&j<=n){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=n){
            temp.push_back(nums[j]);
            j++;
        }
        for(int i = s; i <= n; i++){
    nums[i] = temp[i - s];
}
    }
    void quickSort(vector<int>&nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        quickSort(nums,s,mid);
        quickSort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        // directly we can use bubble sort for bruteforce.
        // for better use quick merge sort 
        int n=nums.size()-1;
        quickSort(nums,0,n);
        return nums;
    }
};