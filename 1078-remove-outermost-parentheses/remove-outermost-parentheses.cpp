class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack<char>st;
        // string ans;
        // for(auto a:s){
        //     if(a=='('){
        //         if(st.size()>0){
        //             ans+='(';
        //         }
        //         st.push('(');
        //     }
        //     else{
        //         if(st.size()>1){
        //             ans+=')';
        //         }
        //         st.pop();
        //     }
        // }
        // return ans;
        string res;
        int open=0;
        for(char ch:s){
            if(ch=='('){
                if(open>0){
                    res+=ch;
                }
                open++;
            }
            else{
                open--;
                if(open>0){
                    res+=ch;
                }
            }
        }
        return res;
    }
};