class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto &a:asteroids){
             while(!st.empty() && a<0 && st.top()>0){
                int sum=st.top()+a;
                if(sum<0){
                    st.pop();
                }
                else if(sum>0){
                    a=0;
                }
                else{
                    st.pop();
                    a=0;
                }
             }
             if(a!=0){
                st.push(a);
             }
        }
        int s=st.size();
        int i=s-1;
        vector<int>res(s);
        while(!st.empty()){
            res[i]=st.top();
            st.pop();
            i--;
        }
       return res;
    }
};