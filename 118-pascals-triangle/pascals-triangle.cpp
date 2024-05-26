class Solution {
public:
    int nCr(int n,int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return (int)res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int row=1;row<=numRows;row++){
            vector<int>TempLst;
            for(int col=1;col<=row;col++){
                TempLst.push_back(nCr(row-1,col-1));
            }
            ans.push_back(TempLst);
        }
        return ans;
    }
};