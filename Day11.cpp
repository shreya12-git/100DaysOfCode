//finding count of each letter:Day11
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string alphaOrder(string s) {
  string ans;
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length(); i++) {
    int count = 1;
    while (s[i] == s[i + 1]) {
      count++;
      i++;
    }
    ans += s[i] + to_string(count);
  }
  return ans;
}

int main() {
  string s = "geeksforgeeks";
  cout << "answer for the above is: " << alphaOrder(s) << endl;
  return 0;
}