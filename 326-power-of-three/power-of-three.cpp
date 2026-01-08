class Solution {
public:
    bool isPowerOfThree(long n) {
        for(long x=0; x<=30; x++){
            long sol = pow(3,x);

            if(sol == n){
                return true;
            }
        }
        return false;
    }
};