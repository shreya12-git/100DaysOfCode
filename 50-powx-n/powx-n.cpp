class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        long long N = n;  // Use long long to handle INT_MIN
        if(N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double ans = myPow(x, N / 2);
        if(N % 2 == 0) {
            return ans * ans;
        } else {
            return x * ans * ans;
        }
        return -1;
    }
};