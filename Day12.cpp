//How to insert characters in a string at a certain position?:Day12
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string stringChar(string s,vector<int>&stars){
    string ans="";
    int j=0;
    for(int i=0;i<s.length();i++){
            if(i==stars[j] && j<stars.size()){
                ans+='*';
                j++;
            }
            ans+=s[i];
    }
    return ans;
}
int main(){
    string s="geeksforgeeks";
    vector<int> chars = { 1, 5, 7, 9 };
    cout<<"The updated string:"<<endl;
    cout<<stringChar(s,chars);