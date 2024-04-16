class Solution {
public:
    string makeGood(string s) {
        if(s.empty()){
            return "";
        }
        string result="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(!result.empty() && abs(ch-result.back())==32){
                result.pop_back();
            }
            else{
                result.push_back(ch);
            }
        }
        return result;
    }
};