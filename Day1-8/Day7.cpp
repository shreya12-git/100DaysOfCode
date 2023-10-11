// Find Peak Element(LeetCode-Problem no.162)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        // Binary Search:
        int low = 0, high = n - 1; 
        while (low < high) { 
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1]) {
                high = mid; 
            } else {
                low = mid + 1; 
            }
        }
        return low; 
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    int peakIndex = solution.findPeakElement(nums);
    cout << "The peak element is at index: " << peakIndex << endl;
    return 0;
}





