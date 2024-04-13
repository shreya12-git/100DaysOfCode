class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0,r=n-1;
        int ans=0;
    
        while(l<=r){
            int m=l+(r-l)/2;
            int pre=n-m;
            if(citations[m]==pre){
                return citations[m];
            }
            else if(citations[m]<pre){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return n-l;
    }
    
};