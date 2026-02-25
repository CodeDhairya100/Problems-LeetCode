class Solution {
public:

    int sqrSum(int num){
        int sum=0;
        while(num!=0){
            int number = num%10;
            sum=sum+(number*number);
            num=(num-number)/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int ans=n;
        while(ans>=5){
            ans=sqrSum(ans);
        }
        if(ans==1){
            return true;
        }
        else{
            return false;
        }
    }
};