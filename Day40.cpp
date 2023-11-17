//Roman to Integer
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int>mp{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
           int n=s.size();
    for(int i=0;i<n;i++){
        if(mp[s[i]]<mp[s[i+1]]){
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};
int main(){
    Solution s;
    cout<<"The integer value if this roman number is:"<<s.romanToInt("IV");
}