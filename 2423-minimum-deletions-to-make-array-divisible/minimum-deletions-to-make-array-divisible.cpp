class Solution {
public:
    int findGCD(vector<int>&numsDivide){
        int gcdnumb=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            gcdnumb=gcd(gcdnumb,numsDivide[i]);
        }
        return gcdnumb;
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