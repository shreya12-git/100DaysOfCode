//BUBBLE SORT:
#include<iostream>
using namespace std;
int bubsort(int arr[],int n){
    for(int i=1;i<n;i++){
        //For round 1 to n-1
        bool swapped=false;//Starting me element swapped
        for(int j=0;j<n-i;j++){
            //process or compare elements till n-i th position.
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]); 
              swapped=true;
            }
        }
        if(swapped==false){
            //already swapped
            break;
        }
    }

}
int print(int arr[],int n){
    int i;
    for(i=0;i<n;++i){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int ar[6]={10,1,7,6,14,9};
    int n = sizeof(ar)/sizeof(ar[0]);
    bubsort(ar,n);
    cout<<"SORTED ARRAY IS:"<<print(ar,n);
    return 0;
}