class Solution {
public:
    int maximum(vector<int> candies){
        int n=candies.size();
        sort(candies.begin(),candies.end());
        return candies[n-1];
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>ans;
        int n=candies.size();
        int numb=0;
        int maxi=maximum(candies);
        for(int i=0;i<n;i++){
            numb=extraCandies+candies[i];
            if(numb>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};