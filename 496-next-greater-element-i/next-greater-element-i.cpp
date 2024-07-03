#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findGreatest(vector<int>& vec) {
        vector<int> ans(vec.size());
        stack<int> st;
        
        for (int i = vec.size() - 1; i >= 0; --i) {
            while (!st.empty() && st.top() <= vec[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(vec[i]);
        }
        
        return ans;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> index_map;
        for (int i = 0; i < nums2.size(); ++i) {
            index_map[nums2[i]] = i;
        }

        vector<int> vec(nums2.size());
        for (int i = 0; i < nums1.size(); ++i) {
            vec[index_map[nums1[i]]] = nums1[i];
        }

        vector<int> next_greater = findGreatest(nums2);
        vector<int> ans(nums1.size());
        for (int i = 0; i < nums1.size(); ++i) {
            ans[i] = next_greater[index_map[nums1[i]]];
        }

        return ans;
    }
};
