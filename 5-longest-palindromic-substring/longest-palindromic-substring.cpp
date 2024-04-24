class Solution {
public:
    string longestPalindrome(string s){
        int n=s.size(), maxLen=0;
        string result="";
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            for(int j=0, k=i; k<n ; j++, k++){
                if(i==0) dp[j][k]=true;
                else if(i==1) dp[j][k]=(s[j]==s[k]);
                else dp[j][k]=(s[j]==s[k] and dp[j+1][k-1]);

                if(dp[j][k] and (k-j+1)>maxLen){
                    result=s.substr(j,k-j+1);
                    maxLen=result.size();
                }
            }
        }
    return result;
    }
};