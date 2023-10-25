// Check if characters of a given string can be rearranged to form a palindrome
//Anagram Palindrome DAY22

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool checkPalindrome(string s)
{
    vector<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        auto pos = find(ans.begin(), ans.end(), s[i]);
        if (pos != ans.end())
        {
            auto posi = find(ans.begin(), ans.end(), s[i]);
            ans.erase(posi);
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    if (s.length() % 2 == 0 && ans.empty() || (s.length() % 2 == 1 && ans.size() == 1))
        return true;

    // if string length is odd
    else
        return false;
}
int main()
{
    string s = "tkjprepggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxfxtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipyamyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknlyjyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiuteiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhdizcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxohgmgnkeufdxotogbgxpeyanfetcu";
    cout << checkPalindrome(s);
}