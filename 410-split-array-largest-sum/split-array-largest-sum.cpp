class Solution {
public:
    bool isPossible(vector<int>&arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
     
        
    for(int i=0;i<n;i++){
        if (arr[i] > mid) {
            return false; // If a single book has more pages than mid, it's not possible
        }
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m ){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

    int splitArray(vector<int>& arr, int m) {
        int n=arr.size();
         if(m>n){
        return -1;
    }
    int s=0;
    int ans=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
       if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
       }
       else{
           s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return ans;
    }
};