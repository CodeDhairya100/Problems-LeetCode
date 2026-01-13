class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=0;
        int num=x;
        while(num>0){
            int last=(num%10);
            temp=((temp*10)+last);
            num=(num-last)/10;
        }
        if (temp==x){
            return true;
        }
        return false;
    }
};