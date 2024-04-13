class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        set<int>nums1Set(nums1.begin(),nums1.end());
        set<int>intersectionSet;
        for(int num:nums2){
            if(nums1Set.count(num)>0){
                intersectionSet.insert(num);
            }
        }
            vector<int> ans(intersectionSet.begin(), intersectionSet.end());
    return ans;
    }
};