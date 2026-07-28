class Solution {
public:
    int balancedStringSplit(string s) {
        int count2 =0;
        int countr=0;
        int countl=0;
        for(char ch : s){
            if(ch=='R'){
                countr++;
            }
                else if(ch=='L'){
                    countl++;
                }
                if(countr==countl){
                    count2++;
                }
        }
        return count2++;
    }
};
            