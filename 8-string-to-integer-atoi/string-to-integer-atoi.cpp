class Solution {
public:
    int myAtoi(string s) {
        int neg = 1;
        int n = s.length();
        int i = 0;
        int num = 0;
        int digit;

        while(i<n && s[i]==' '){
            i++;
        }
        if(i < n && s[i] == '-'){
            neg = -1;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }

        while(i < n){

            if(s[i] >= '0' && s[i] <= '9'){

                digit = s[i]-'0';

                if(num > (INT_MAX - digit) / 10){
                    return neg == 1 ? INT_MAX : INT_MIN;
                }

                num = num * 10 + digit;
                i++;
            }

            else{
                break;
            }
        }
        return neg * num;
    }
};