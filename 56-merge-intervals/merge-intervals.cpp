class Solution {
public:
    static bool comp(vector<int>&a, vector<int>& b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        vector<vector<int>> ret;
        int size = intervals.size();
        if(size == 0){
            return ret;
        }
        int curs = intervals[0][0], curf = intervals[0][1];
        for(int i=1;i<size;i++){
            if(intervals[i][0] <= curf){
                curf = max(intervals[i][1], curf);
                continue;
            }
            ret.push_back(vector<int>{curs,curf});
            curs = intervals[i][0];
            curf = intervals[i][1];
        }
        ret.push_back(vector<int>{curs,curf});
        return ret;
        
    }
};