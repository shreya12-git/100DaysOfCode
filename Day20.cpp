// Given a binary string S. The task is to count the number of substrings that starts and end with 1.Day20
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int countSubstring(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            if (s[i] == '1' && s[len - 1] == '1')
            {
                cout << s.substr(i, len) << endl;
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    string s = "10101";
    countSubstring(s);
}