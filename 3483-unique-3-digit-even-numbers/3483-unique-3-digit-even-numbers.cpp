class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> st;
        int n=digits.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i == j || j == k || k == i) {
                        continue;
                    } else {
                      int  digit = 100 * digits[i] + 10 * digits[j] + digits[k]; // 123 , 456, 121
                        if (digits[i] != 0 && digit % 2 == 0) {
                            st.insert(digit);
                        }
                    }
                }
            }
        }
        return st.size();
    }
};