class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]<b[0];
        });
        vector<vector<int>>ans;
        vector<int>nI=intervals[0];
        ans.push_back(nI);
        for(const vector<int>&i:intervals){
            if(i[0]<=nI[1]){
                nI[1]=max(nI[1],i[1]);
                ans.back()[1]=nI[1];
            }
            else{
                nI=i;
                ans.push_back(nI);
            }
        }
        return ans;
    }
};