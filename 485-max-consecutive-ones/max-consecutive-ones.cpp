class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ans++;
                
            }else{
                ans=0;
            }
            maxi=max(maxi,ans);
        }
       
        return maxi;
    }
};