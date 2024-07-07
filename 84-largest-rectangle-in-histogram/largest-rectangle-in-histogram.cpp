#include <vector>
#include <stack>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& heights, int n) {
        stack<int> st;
        vector<int> res(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                res[i] = n;
            } else {
                res[i] = st.top();
            }
            st.push(i);
        }
        return res;
    }
    
    vector<int> prevSmallerElement(vector<int>& heights, int n) {
        stack<int> st;
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                res[i] = -1;
            } else {
                res[i] = st.top();
            }
            st.push(i);
        }
        return res;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;
        for (int i = 0; i < n; i++) {
            int l = heights[i];
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
};
