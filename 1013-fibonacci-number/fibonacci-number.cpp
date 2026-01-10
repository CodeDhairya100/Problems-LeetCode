class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int c=0;
        if(n==1){
            return b;
        }
        for(int x=2;x<=n;x++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        cout<<endl;
    }
};