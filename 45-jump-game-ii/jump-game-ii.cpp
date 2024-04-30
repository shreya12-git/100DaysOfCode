class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int maxReach = 0;
        int lastReach = 0; // Store the last reachable index
        int n = nums.size();
        
        for (int i = 0; i < n - 1; i++) {
            maxReach = max(maxReach, nums[i] + i);
            if (i == lastReach) { // We need to jump
                lastReach = maxReach;
                count++;
            }
        }
        
        return count;
    }
};
