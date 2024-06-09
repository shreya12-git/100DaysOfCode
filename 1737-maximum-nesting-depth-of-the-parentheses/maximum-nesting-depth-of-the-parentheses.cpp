class Solution {
public:
    int maxDepth(string s) {
       int maxi=0;
       int count=0;
       int n=s.length();
       for(char c:s){
        if(c=='('){
            count++;
        }
        if(c==')'){
            count--;
        }
        maxi=max(count,maxi);
       } 
       return maxi;
    }
};