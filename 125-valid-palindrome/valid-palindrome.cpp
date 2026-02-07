class Solution {
public:

    char toLowerCase(char ch){
        if(ch>='a'&&ch<='z'){
            return ch;
        }
        return ch-'A'+'a';
    }

    bool isvalid(char ch){
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9'))
        { 
            return false;
        }
        return true;
    }

    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;

        while(start<end){

            if(isvalid(s[start])){
                start++;
                continue;
            }
            if(isvalid(s[end])){
                end--;
                continue;
            }

            char smallS=toLowerCase(s[start]);
            char smallE=toLowerCase(s[end]);
            
            if(smallS!=smallE){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};