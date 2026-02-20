class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        int i=0;

        if(n==1 || n==0){
            return s;
        }
        while(i<n){
            if(s[i]>='a' && s[i]<='z' && s[i+1]>='0' && s[i+1]<='9'){
                 s.erase(i,2);
                 i=0;
            }
            else{
                i++;
            }
        }
        return s;
    }
};