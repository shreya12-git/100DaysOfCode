class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int minSize=nums.size()+1;
        while(r<nums.size() && sum<target){
            sum+=nums[r];
            if(sum>=target){
                while(sum>=target){
                sum-=nums[l];
                minSize=min(minSize,r-l+1);
                l++;
                }
            }
             r+=1;
        }
       return minSize == nums.size() + 1 ? 0 : minSize;
    }
};