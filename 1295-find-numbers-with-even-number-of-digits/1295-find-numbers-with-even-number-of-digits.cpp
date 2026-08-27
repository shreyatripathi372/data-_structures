class Solution {
public:
    int countDigits(int n) {
        if (n == 0)
            return 0;

        return 1 + countDigits(n / 10);
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int digits = countDigits(nums[i]);

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};