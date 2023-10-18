//Remove all occurrences of a character in a string:Day15
#include<iostream>
#include<string>
using namespace std;
string removeChar(string s,char ch){
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch && i<s.length()){
            ans+=s[i];
        }
    }
    return ans;
}
int main(){
    string s="geeksforgeeks";
    char ch='k';
    cout<<"The updated string:"<<endl;
    cout<<removeChar(s,ch);
}