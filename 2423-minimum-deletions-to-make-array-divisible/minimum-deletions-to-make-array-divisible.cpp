class Solution {
public:
    int findGCD(vector<int>&numsDivide){
        int gcd=numsDivide[0];
        int n=numsDivide.size();
        for(int i=0;i<n;i++){
            int num=numsDivide[i];
            while(num>0){
                int temp=gcd%num;
                gcd=num;
                num=temp;
            }
        }
        return gcd;
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gcd=findGCD(numsDivide);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(gcd%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};