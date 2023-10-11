//Single Element in a Sorted Array:(Leetcode problem no: 540 )
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        int l = 1, h = n - 2;
        while (l <= h) {
            int m = l + (h - l) / 2; 
            if (nums[m] != nums[m + 1] && nums[m] != nums[m - 1]) {
                return nums[m];
            }
            if (m % 2 == 1) {
                if (nums[m] == nums[m - 1]) {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            } else {
                if (nums[m] == nums[m + 1]) {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int result = solution.singleNonDuplicate(nums);
    cout << "The single non-duplicate element is: " << result << endl;
    return 0;
}