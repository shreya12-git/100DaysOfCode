class Solution {
public:
    int candy(vector<int>& ratings) {
         int n = ratings.size();
        vector<int> ans(n, 1);

        // Traverse the ratings array to adjust the candies
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                ans[i] = ans[i - 1] + 1; // If the current rating is greater than the previous, assign more candies
            }
        }

        // Traverse the ratings array in reverse to handle cases where decreasing ratings
        // might not be properly assigned candies
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && ans[i] <= ans[i + 1]) {
                ans[i] = ans[i + 1] + 1; // If the current rating is greater than the next and has fewer or equal candies, adjust candies
            }
        }

        // Calculate total candies
        int totalCandies = 0;
        for (int i = 0; i < n; i++) {
            totalCandies += ans[i];
        }

        return totalCandies;
    }
    };
    
