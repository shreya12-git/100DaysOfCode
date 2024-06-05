class Solution {
public:
    bool canEatAll(vector<int>&piles,int givenHour,int h){
        int actualHour=0;
        for(int &i:piles){
            actualHour+=i/givenHour;
            if(i%givenHour!=0){
                actualHour++;
            }
        }
          return actualHour <= h;
    }
 int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        
        int l = 1, r = *max_element(begin(piles), end(piles));
        
        while(l < r) {
            int mid = l + (r-l)/2;
            
            if(canEatAll(piles, mid, h)) {
                r = mid;
            } else {
                l = mid+1;
            }
            
        }
        
        return l;
    } 
};