#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int n = s.length();
        unordered_map<char, int> mp;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            mp[s[right]]++;

            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                count += n - right;
                mp[s[left]]--;
                left++;
            }
        }
        
        return count;
    }
};
