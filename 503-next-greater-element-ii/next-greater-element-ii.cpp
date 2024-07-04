#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // Initialize the result vector with -1
        stack<int> st; // This will store indices

        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i % n]) {
                st.pop();
            }
            if (i < n) {
                if (!st.empty()) {
                    ans[i] = nums[st.top()];
                }
            }
            st.push(i % n);
        }

        return ans;
    }
};
