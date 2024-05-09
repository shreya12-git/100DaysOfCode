class Solution {
    // void changedvec(vector<int>& happiness,int i){
    //     int n=happiness.size();
    //     for(int j=0;j<i;j++){ 
    //         happiness[j]=happiness[j]-1;
    //     }
    // }
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
    // int i=0;
    // vector<int>ansvec;
    // int finans=0;
    // sort(happiness.begin(),happiness.end());
    // while(i<k){
    //     for(int j=0;j<happiness.size();j++){ 
    //         if(j==happiness.size()-1){ 
    //             changedvec(happiness,j);
    //             if(happiness[j]>0){
    //                  finans=finans+happiness[j]; 
    //             }
    //             happiness.erase(happiness.begin()+j);
    //         }      
    //     }
    //     i++;
    //   }
    //   return finans;
    sort(happiness.begin(),happiness.end(),greater<int>());
    long long tothappiness=0;
    int t=0;
    for(int i=0;i<k;i++){
        tothappiness+=max(happiness[i]-t,0);
        t++;
    }
    return tothappiness;
    }
};