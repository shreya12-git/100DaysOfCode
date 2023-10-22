//Program to print all substrings of a given string
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void subString(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=s.length()-i;j++){
            cout<<s.substr(i,j)<<endl;
            count++;     
        }
    }
    cout<<count;
}
int main(){
    string s="abcd";
    subString(s);
}