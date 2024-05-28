class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        vector<int>ans; 
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           int num=nums[i];
            int rem=target-num;
            if(mp.find(rem)!=mp.end()){
                ans.push_back(i);
                 ans.push_back(mp[rem]);
                 break;
            }
            mp[num]=i;
        }  
        return ans;
    }
};