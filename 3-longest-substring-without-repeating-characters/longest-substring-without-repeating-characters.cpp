class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            unordered_map<char,int>mp;
            int n=s.length();
            int ans=0,curr=0;
            for(int i=0;i<n;i++){
                if(mp.find(s[i])!=mp.end()){
                    curr=max(mp[s[i]]+1,curr);
                }
                mp[s[i]]=i;
                ans=max(ans,i-curr+1);
            }
            return ans;
    }
};