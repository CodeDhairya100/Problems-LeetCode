class Solution {
public:

    string toBinary(int n) {
        string ans = "";

        while(n > 0) {
            ans = char((n % 2) + '0') + ans;
            n /= 2;
        }
        return ans;
    }


    bool hasAlternatingBits(int n) {
        string binary = toBinary(n);
        int i=0;
        while(i<binary.length()-1){
            if(binary[i]==binary[i+1]){
                return false;
            }
            else{
                i++;
            }

        }
        return true;
    }
};