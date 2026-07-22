class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        // nums1 ke last valid element ka index
        int j = n - 1;        // nums2 ke last element ka index
        int k = m + n - 1;    // nums1 ke last position (total size)

        // Jab tak dono arrays mein elements bache hain
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];  // bada element nums1 se lo
            } else {
                nums1[k--] = nums2[j--];  // bada element nums2 se lo
            }
        }

        // Agar nums2 mein elements bache hain
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
