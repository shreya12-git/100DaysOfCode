#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    string ss1;
    string ss2;

    for (int i = 0; i < s.length(); i++)
    {
        ss1 = s.substr(i) + s.substr(0, i);//aaaad,daaaa

        int start1 = 0, end1 = ss1.length() - 1;
        ss2=ss1;
        while (start1 < end1)//daaaa
        {
            swap(ss1[start1++], ss1[end1--]);
        }
       
        if (ss1 == ss2)//daaaa != aaaad  
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s = "aaaad";
    // if(checkPalindrome(s)){
    //     cout<<'1'<<endl;
    // }
    // else{
    //     cout<<'0'<<endl;
    // }
    cout << checkPalindrome(s);
}