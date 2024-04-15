class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_sum=0;
        for(char ch:s){
            if(ch=='('){
                count++;
                if(max_sum<count){
                    max_sum=count;
                }
            }
            else if(ch==')'){
                    count--;
            }
        }
        return max_sum;
    }
};