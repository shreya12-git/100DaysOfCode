//For finding the next binary integer:Day18
#include<iostream>
#include<string>
using namespace std;
string findNextInteger(string s){
    int i;
    for( i=s.length();i>=0;i--){
        if(s[i]=='0'){
            s[i]='1';
            break;
        }
        else
            s[i]='0';
    }
     if(i<0){
         s="1"+s;
      
    }
    s.erase(0,s.find_first_not_of('0'));
    return s;
}
int main(){
    string s1="00110000";
    cout<<"The next integer is:"<<endl;
    cout<<findNextInteger(s1)<<endl;

    
}