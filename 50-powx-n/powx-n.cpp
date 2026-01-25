class Solution {
public:
    double myPow(double x, int n) {

            long long N=n;
            if(N<0){
                x=1/x;
                N=-N;
            }

        double ans=1.0;
        double base=x;

        while(N>0){

            int last=N%10;
            if(last!=0){
                ans = pow(base,last)*ans;
            }           
            base = pow(base,10);
            N=N/10;
        }
        return ans;
    }
};