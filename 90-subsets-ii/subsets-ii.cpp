class Solution {
public:
    void solve(vector<int>&nums,set<vector<int>>&ans,vector<int>output,int index){
        if(index>=nums.size()){
            ans.insert(output);
            return;
        }
        //exclude:
        solve(nums,ans,output,index+1);
        //include:
        int ele=nums[index];
        output.push_back(ele);
        solve(nums,ans,output,index+1); 
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      set<vector<int>>ans;
      int index=0;
      vector<int>output;
      solve(nums,ans,output,index);
      vector<vector<int>>res(ans.begin(),ans.end());
      return res;

    }
};