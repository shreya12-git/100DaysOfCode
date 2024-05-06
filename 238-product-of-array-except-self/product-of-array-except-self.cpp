class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int in=-1;
        int prod=1;
        vector<int>fin;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                in=i;
            }
        }
        cout<<"in is:"<<in<<endl;
        if(in!=-1){
            int temp=1;
            vector<int>ans(n,0);
            for(int i=0;i<n;i++){
                if(i!=in){
                    temp*=nums[i];
                }
            }
            ans[in]=temp;
            return ans;
        }
       else{
        for(int i=0;i<n;i++){
            prod*=nums[i];
        }
        for(int i=0;i<n;i++){
            fin.push_back(prod/nums[i]);
        } 
        return fin;
       }
      
    }
    
};