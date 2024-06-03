class Solution {
public:
       vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int left=leftOccurence(nums,target);
        int right=rightOccurence(nums,target);
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
private:
    int leftOccurence(vector<int>&nums,int target){
        int n=nums.size();
        int s=0,e=n-1,left=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]>=target){
                e=m-1;
            }
            else{
                s=m+1;
            }
            if(nums[m]==target){
                left=m;
            }
        }
        return left;
    }
    int rightOccurence(vector<int>&nums,int target){
        int n=nums.size();
        int s=0,e=n-1,right=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]<=target){
                s=m+1;
            }
            else{
                e=m-1;
            }
            if(nums[m]==target){
                right=m;
            }
        }
        return right;
    }
};
