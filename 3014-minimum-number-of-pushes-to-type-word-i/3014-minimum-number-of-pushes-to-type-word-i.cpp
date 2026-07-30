class Solution {
public:
    int minimumPushes(string word) { 
        int n=word.size();
        if(n<=8){
            return n;
        }
        if(n>8 && n<=16){
            return (2*n-8);
        }
        if(n>16 && n<=24){
            return(3*n-24);
        }
        if(24<n && n<=26){
            return (4*n-48);
        }
        return -1;


        
    }
};