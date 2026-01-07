class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int x=0; x<=30; x++){
            int sol = pow(2,x);

            if(sol == n){
                return true;
            }
        }
        return false;
    }
};