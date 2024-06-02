class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int maxi=0;
        int diff=0;
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        while(i<n && j<n){
            diff=nums[j]-nums[i];
            i++;
            j++;
            maxi=max(diff,maxi);
        }
        return maxi;
    }
};