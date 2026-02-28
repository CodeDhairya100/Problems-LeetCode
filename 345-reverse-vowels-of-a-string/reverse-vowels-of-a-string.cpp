class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.length()-1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                                      'A', 'E', 'I', 'O', 'U'};
        

        while(start<end){
            if(!vowels.count(s[start])){
                start++;
            }
            else if(!vowels.count(s[end])){
                end--;
            }
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }    
        }
        return s;
    }
};