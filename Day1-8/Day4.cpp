//FINDING THE PIVOT ELEMENT FROM THE GIVEN ARRAY:
#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int main(){
    int ar[5]={3,8,10,17,1};
    cout<<"pivot is: "<<getPivot(ar,5)<<endl;
}