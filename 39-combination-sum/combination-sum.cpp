class Solution {
public:
    void solve(vector<int>& c,set<vector<int>> &ans,vector<int>output, int t){
        if(t==0){
            sort(output.begin(),output.end());
            ans.insert(output);
            return;
        }
        if(t<0){
            return;
        }
        for(int i =0;i<c.size();i++){
            output.push_back(c[i]);
            solve(c,ans,output,t-c[i]);
            output.pop_back();
        }
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        int index=0;
        vector<int>output;
        set<vector<int>> ans;
        for(int i =0;i<c.size();i++){
            output.push_back(c[i]);
            solve(c,ans,output,target-c[i]);
            output.pop_back();
        }
        vector<vector<int>> a;
        for(auto i:ans){
            a.push_back(i);
        }
        return a;
    }
};