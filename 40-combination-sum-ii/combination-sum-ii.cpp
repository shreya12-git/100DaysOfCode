class Solution {
public:
    void solve(vector<int>& candidates, vector<int>& output, vector<vector<int>>& ans, int target, int index) {
        if (target == 0) {
            ans.push_back(output);
            return;
        }
        if (target < 0 || index >= candidates.size()) {
            return;
        }
        
        for (int i = index; i < candidates.size(); ++i) {
            if (i > index && candidates[i] == candidates[i-1]) continue; // skip duplicates
            
            output.push_back(candidates[i]);
            solve(candidates, output, ans, target - candidates[i], i + 1);
            output.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> output;
        vector<vector<int>> ans;
        solve(candidates, output, ans, target, 0);
        return ans;
    }
};
