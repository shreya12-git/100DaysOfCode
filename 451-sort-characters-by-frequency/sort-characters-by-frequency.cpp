#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string frequencySort(std::string s) {
        // Vector to store the frequency and character
        std::vector<std::pair<int, char>> hash(128, {0, 0});
        
        // Fill the vector with character frequencies
        for (char c : s) {
            hash[c].first++;
            hash[c].second = c;
        }

        // Sort the vector based on frequencies in descending order
        std::sort(hash.begin(), hash.end(), [](const std::pair<int, char>& a, const std::pair<int, char>& b) {
            return a.first > b.first;
        });
        
        // Build the result string based on sorted frequencies
        std::string res;
        for (const auto& p : hash) {
            if (p.first > 0) {
                res.append(p.first, p.second);
            }
        }
        return res;
    }
};
