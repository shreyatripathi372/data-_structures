class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        int i=0;
        int j=s.length()-1;
        if(x<0){
            return false;
        }
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
                i++;
                j--;
        }
        return true;
    }
};