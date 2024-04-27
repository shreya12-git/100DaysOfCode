class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc = 0;
        vector<int> res;
        int prod = 1;
        for (auto it : nums) {
            if (it == 0) {
                zc++;
            } else {
                prod = it * prod;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zc == 1) {
                if (nums[i] == 0) {
                    res.push_back(prod);
                } else {
                    res.push_back(0);
                }
            } else if (zc > 1) {
                res.push_back(0);
            } else {
                res.push_back(prod / nums[i]);
            }
        }
        return res;
    }
};