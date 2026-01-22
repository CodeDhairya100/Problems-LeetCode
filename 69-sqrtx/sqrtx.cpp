class Solution {
public:

    long long int binarySearch(int n){

        int s=0;
        int e=n;
        long long int mid = (s+e)/2;
        int ans = 0;

        if(n==0){
            return 0;
        }

        while(s<=e){

            long long int check=mid*mid;

            if(check==n){
                return mid;
            }
            if(check>n){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            mid=(s+e)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};