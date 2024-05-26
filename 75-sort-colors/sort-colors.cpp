class Solution {
public:
    void sortColors(vector<int>& nums) {
    //   int n=nums.size();
    //   int min;
    //   for(int i=0;i<n-1;i++){
    //       min=nums[i];
    //       for(int j=i+1;j<n;j++){
    //           if(min>nums[j]){
    //               swap(min,nums[j]);
    //           }
    //       }
    //       nums[i]=min;
    //   }
    sort(nums.begin(),nums.end());
    }
};