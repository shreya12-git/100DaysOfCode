//Sorting of the string:Day10
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string sortingString(string s){
    vector<int>num;
    string ans;
    for(int i=0;i<s.length();i++){
        int ascii=static_cast<int>(s[i]);
        num.push_back(ascii);
    }
    for(int i=0;i<num.size()-1;i++){
        int min=i;
        for(int j=i+1;j<num.size();j++){
            if(num[min]>num[j]){
                min=j;
            }
        }
        swap(num[min],num[i]);
    }
    for(int i=0;i<num.size();i++){
        char ch=static_cast<char>(num[i]);
        ans.push_back(ch);
    }
    return ans;
}
int main(){
    string s="bbccdefbbaa";
    cout<<"The sorted string is:"<<sortingString(s);
    
    
}