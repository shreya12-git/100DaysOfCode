class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int len=0;
        int maxlen=0;
        vector<int>hash(256,-1);
        int l=0,r=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                
                    l=max(hash[s[r]]+1,l);
            }
            len=r-l+1;
            maxlen=max(len,maxlen);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};