class Solution {
public:
        vector<int> NSL(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> nsl(n);
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                nsl[i] = -1;
            } else {
                nsl[i] = st.top();
            }
            st.push(i);
        }
        return nsl;
    }

    vector<int> NSR(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> nsr(n);
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                nsr[i] = n;
            } else {
                nsr[i] = st.top();
            }
            st.push(i);
        }
        return nsr;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nsl = NSL(arr, n);
        vector<int> nsr = NSR(arr, n);
        long long ans = 0;
        long long mod = 1e9 + 7;

        for (int i = 0; i < n; ++i) {
            long long left = i - nsl[i];
            long long right = nsr[i] - i;
            ans = (ans + arr[i] * left * right) % mod;
        }
        return ans;
    }
};

