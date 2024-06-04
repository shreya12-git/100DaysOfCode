class Solution {

    int getPivot(vector<int>&nums){
        int s=0,e=nums.size()-1;
         int m=s+(e-s)/2;
        while(s<e){
            if(nums[m]>=nums[0]){
                s=m+1;
            }
            else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return s;
    }
    int binarySearch(vector<int>&nums,int &target,int s,int e){
        int n=nums.size();
         int m=s+(e-s)/2;
        while(s<=e){
           
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return -1;
    }
    public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int pivot=getPivot(nums);
        if(target>=nums[pivot] && target<=nums[e]){
            return binarySearch(nums,target,pivot,e);
        }
        else{
            return binarySearch(nums,target,s,pivot-1);
        }
        return -1;
    }
};