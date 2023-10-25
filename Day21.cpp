//Check if a given string is a rotation of a palindrome DAY21
#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool checkPalindrome(string s){
    vector<string>ans1;
    vector<string>ans2;
    string ss1;
    string anss1;
    string ss2;
    int n=s.length();
    
    int d=2;
    for(int i=0;i<n;i++){
        ss1=s.substr(i)+s.substr(0,i);
        int start=0,end=ss1.length()-1;
        while(start<end){
            swap(ss1[start++],ss1[end--]);
        }
        if(ss1==s){
            ans1.push_back(ss1);
        }
    }
    for(int i=0;i<n;i++){
        int f=n-i;
        ss2=s.substr(f)+s.substr(0,f);
        int start=0,end=ss2.length()-1;
        while(start<end){
            swap(ss2[start++],ss2[end--]);
        }
        if(ss2==s){
            ans2.push_back(ss2);
        }
    }
    if(ans1.empty() || ans2.empty()){
        return false;
    }
    else{
        return true;
    }
   
}
int main(){
    string s="ahuwwieqwpoeowrojqwrjawskldnsnfdsfjdsfdgvjdgnds";
    // if(checkPalindrome(s)){
    //     cout<<'1'<<endl;
    // }
    // else{
    //     cout<<'0'<<endl;
    // }
   cout<<checkPalindrome(s);
}