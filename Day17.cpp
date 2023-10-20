//Binary Strings:Check if all bits can be made same by single flip.Day17
#include<iostream>
#include<string>
using namespace std;
bool checkForBits(string s){
    int zeros=0,ones=0;
    for(char ch:s){//101
        if(ch=='0'){
            ++zeros;//1
        }
        else{
            ++ones;//2
        }
    }
    return(zeros==1 || ones==1);//t||f==t

}
int main(){
    string s="010";
   if( checkForBits(s)){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }

    // if(checkForBits(s)==0){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }
    // string s="11";
    // checkForBits(s);
    // string s="1";
    // checkForBits(s);
}