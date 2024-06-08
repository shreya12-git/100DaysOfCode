class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 != 0) { 
                return num.substr(0, i + 1); // Return the substring up to and including this odd digit
            }
        }
        return ""; // If no odd digit is found, return an empty string
    }
};
