class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // find maximum differece between 2  x-axis such that there is no point between them
        sort(points.begin(),points.end());

        int ans = 0;

        for(int i = 1 ; i < points.size(); i++){
            ans = max(ans , points[i][0] - points[i-1][0]);
        }

        return ans;
    }
};