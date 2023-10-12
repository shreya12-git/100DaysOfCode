//left and right rotation of strings.//Day 9
#include<iostream>
#include<string>
using namespace std;
void leftrotate(string s,int d){
    int n=s.length();
    string ans=s.substr(d)+s.substr(0,d);
    cout<<"Left rotation of the string is:"<<ans<<endl;
}
void rightrotate(string h,int d){
    int n=h.length();
    int f=n-d;
    string ans=h.substr(f)+h.substr(0,f);
    cout<<"Right rotation of the string is:"<<ans<<endl;
    
}
int main(){
    string s="GeeksforGeeks";
    int d=2;
    leftrotate(s,d);
    rightrotate(s,d);
}