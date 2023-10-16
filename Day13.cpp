//Program to put $ after two consecutive vowels://Day13
#include<iostream>
#include<string>
using namespace std;
string checkVowel(string s){
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(s[i]==s[i+1]){
                ans+=s[i];
                ans+=s[i+1];
                ans+='$';
                i++;
            }
            else{
                ans+=s[i];
            }
        }
        else
        {
        ans+=s[i];
        }
    }
    return ans;
}
int main(){
    string s="aabbeedpee";
    cout<<"The updated string is:"<<endl;
    cout<<checkVowel(s);
    return 0;
}