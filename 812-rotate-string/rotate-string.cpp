class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if (n != m) {
            return false;
        } else {
            string temp = s + s; // Correct concatenation
            if (temp.find(goal) != string::npos) {
                return true;
            } else {
                return false;
            }
        }
    }
};
