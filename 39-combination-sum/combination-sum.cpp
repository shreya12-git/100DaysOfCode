class Solution {
public:
    void solve(vector<int>& candidates, set<vector<int>>& ans, vector<int>& out, int target, int index, int total) {
        if (target == total) {
            ans.insert(out);
            return;
        }
        if (total > target) {
            return;
        }
        for (int i = index; i < candidates.size(); ++i) {
            out.push_back(candidates[i]);
            solve(candidates, ans, out, target, i, total + candidates[i]); // Use i to allow same element
            out.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> ans;
        vector<int> out;
        solve(candidates, ans, out, target, 0, 0);
        vector<vector<int>> a(ans.begin(), ans.end());
        return a;
    }
};
