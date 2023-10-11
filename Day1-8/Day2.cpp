//FINDING FIRST AND LAST OCCURENCES OF A GIVEN NUMBER FROM GIVEN ARRAY:
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            e=m-1;
        }
        else if(arr[m]<key){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            s=m+1;
        }
        else if(arr[m]<key){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
return ans;
}
int main(){
    int even[9]={1,2,3,3,3,3,3,3,5};
    cout<<"First occurence of 3 is at index:"<<firstOcc(even,9,3)<<endl;
    cout<<"last occurence of 3 is at index:"<<lastOcc(even,9,3)<<endl;
    return 0;
}