class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        // Group the anagrams together in the map
        for (string s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(s);
        }

        // Collect the results from the map
        vector<vector<string>> ans;
        for (auto& group : anagramGroups) {
            ans.push_back(group.second);
        }

        return ans;
    }
};
