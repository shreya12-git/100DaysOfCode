class Solution {
public:
    int maxDepth(string s) {
        // int count=0;
        // int max_sum=0;
        // for(char ch:s){
        //     if(ch=='('){
        //         count++;
        //         if(max_sum<count){
        //             max_sum=count;
        //         }
        //     }
        //     else if(ch==')'){
        //             count--;
        //     }
        // }
        // return max_sum;
        stack<char>st;
        int mx=0;
        for(char ch:s){
            if(ch=='('){
                st.push(ch);
            }
            else if(ch==')'){
                mx=max((int)st.size(),mx);
                st.pop();
            }
        }
        return mx;
    }
};