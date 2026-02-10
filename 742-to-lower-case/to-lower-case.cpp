class Solution {
public:

    char toLowerCase(char ch){
        if(ch>='A' && ch<='Z'){
            return ch-'A'+'a';
        }
        else{
            return ch;
        }
    }

    string toLowerCase(string s) {
        int n=s.length()-1;
        for(int i=0;i<=n;i++){
            s[i]=toLowerCase(s[i]);
        }
        return s;
    }
};