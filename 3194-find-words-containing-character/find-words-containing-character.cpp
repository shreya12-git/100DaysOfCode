class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n=words.size();
        string temp="";
        for(int i=0;i<n;i++){
            temp=words[i];
            cout<<"The fetched word is:"<<temp<<endl;
            if(temp.find(x)!=std::string::npos){
                ans.push_back(i);
            }
        }
        return ans;
    }
};