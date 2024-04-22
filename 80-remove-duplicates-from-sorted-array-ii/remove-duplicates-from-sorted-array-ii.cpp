class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2) return nums.size();
        int k=0;
        int n=nums.size();
        for(int i=2;i<n;i++){
           if(nums[i]!=nums[k]){
             nums[k+2]=nums[i];
            k++;
           }
        }
        return k+2;
    }
};