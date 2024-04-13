class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>ans;       
        for(int num:nums){
            if(ans.count(num)>0){
                return num;
            }
            else{
                ans.insert(num);
            }
        }
        return -1;
    }
};