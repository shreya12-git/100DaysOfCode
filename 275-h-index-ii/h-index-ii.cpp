class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            int m=l+(r-l)/2;
            if(citations[m]>=n-m){
                ans=max(ans,n-m);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    
};