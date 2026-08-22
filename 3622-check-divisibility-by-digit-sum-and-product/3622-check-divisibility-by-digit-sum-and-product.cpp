class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int temp =n;
        while(n>0){
         int ld = n%10;
         sum = sum+ld;
         pro = pro*ld;
         n =n/10;
        }
        int out = sum+pro;
        if(temp%out==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};