class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        map<int,int>mp;
       
        for (int num : nums1) {
            mp[num]++;
        }
        
        
        for (int num : nums2) {
            mp[num]++;
        }
        vector<int>values;
        for(const auto &i:mp){
          for(int count=0;count<i.second;count++){
              values.push_back(i.first);
          }
        }
        sort(values.begin(),values.end());
        int size=values.size();
        if(size==0){
            return 0;
        }
        else if(size%2==1){
            return values[size/2];
        }
        else{
            return (values[size / 2 - 1] + values[size / 2]) / 2.0;
        }
    }
};