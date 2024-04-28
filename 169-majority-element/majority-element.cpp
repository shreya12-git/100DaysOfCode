class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int max=INT_MIN;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>max){
        //         max=nums[i];
        //     }
        //     if(nums[i]==max){
        //         count++;
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        // return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];

    }
};