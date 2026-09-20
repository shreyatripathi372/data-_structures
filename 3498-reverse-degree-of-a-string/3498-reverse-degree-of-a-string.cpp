class Solution {
public:
    int reverseDegree(string s) {
        int temp = 0;
        for (int i = 0; i < s.size(); i++) {
            int reverse = 26 - (s[i] - 'a');
            int inx = i+1;
            temp+= inx*reverse;
        }
    return temp;
}
};