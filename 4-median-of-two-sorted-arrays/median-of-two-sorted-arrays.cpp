class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<double>merge;
        for(int i=0;i<n;i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            merge.push_back(nums2[i]);
        }
        int size=merge.size();
        double ans=-1;
        int start=0;
        int end=size-1;
        int mid=start+(end-start)/2;
        sort(merge.begin(),merge.end());
        if(size%2!=0){
            ans= merge[mid];
        }
        else{
           ans=(merge[mid]+merge[mid+1])/2; 
        }
        return ans;
    }
};