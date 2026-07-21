class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;   // Agar x 0 ya 1 hai, toh wahi answer hai

        int low = 1;           // Search ka lower bound
        int high = x;          // Search ka upper bound
        int ans = 0;           // Final answer store karne ke liye

        while (low <= high) {  // Jab tak search range valid hai
            long mid = low + (high - low) / 2;  // Middle element nikalna
            long sq = mid * mid;                // Uska square check karna

            if (sq == x) {      // Agar square exactly x ke equal hai
                return mid;     // Direct answer mil gaya
            } else if (sq < x) { // Agar square chhota hai
                ans = mid;      // Mid possible answer ho sakta hai
                low = mid + 1;  // Right side mein search karo
            } else {            // Agar square bada hai
                high = mid - 1; // Left side mein search karo
            }
        }
        return ans;  // Jab loop khatam ho jaye, ans return karo
    }
};
