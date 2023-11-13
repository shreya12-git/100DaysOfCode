//find minimum in sorted array using binary search:
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int findmin(vector<int>nums){
    int low=0;
    int high=nums.size()-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[low]<nums[mid]){
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,nums[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, -1, 1, 2, 3};
    int ans = findmin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}