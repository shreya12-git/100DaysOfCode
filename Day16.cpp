//Removing duplicates:Day 16
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removingDuplicate(string s){
       string ans;
	   for(char ch:s){
	       if(ans.find(ch)==string::npos){
	           ans+=ch;
	       }
	   }
	   return ans;
}
int main(){
    string s="111000236649";//output:1023649
    cout<<removingDuplicate(s);
}