//Anagram:Day24
#include<bits/stdc++.h>
using namespace std;

bool ch(map<char,int>check,int n){
    int c=0;
    for(int i=0;i<check.size();i++){
        if(check[i]%2!=0){
            c++;
            if(c>n){
                return false;
            }
        }
    }
    return true;
}
int isPossible (string S)
{
    // your code here
    map<char,int> check;
    for(long i=0;i<S.length();i++){
        check[S[i]]++;
    }
    if(S.length()%2==0){
        if(ch(check,0)){
            return true;
        }
    }
    if(ch(check,1)){
        return true;
    }
    return false;
}
int main(){
        int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}

}