class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        
        // Use a max heap to sort characters by frequency
        priority_queue<pair<int, char>> maxh;
        for (auto& i : mp) {
            maxh.push(make_pair(i.second, i.first));
        }
        
        string result = "";
        while (!maxh.empty()) {
            pair<int, char> p = maxh.top();
            maxh.pop();
            result.append(p.first, p.second);
        }
        
        return result;
    }
};