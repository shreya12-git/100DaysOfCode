//Program to check if two strings are same or not:Day 14
#include<iostream>
#include<string>
#include<bits/stdc++.h>
bool equalString(char s1[],char s2[]){
    int res=strcmp(s1,s2);
    if(res!=0){
        return 1;
    }
    else{
        return 0;
    }
}
using namespace std;
int main(){
    char s1[]="helloforgeeks";
    char s2[]="helloforgeeks";
    if(equalString(s1,s2)!=0){
        cout<<"The strings are not equal!!";
    }
    else{
        cout<<"The strings are  equal!!";
    }
    return 0;
}