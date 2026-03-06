class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mapS;
        for(int i=0;i<s.size();i++){ 
            mapS[s[i]-'a']++;
        }

        map<char,int>mapT;
        for(int i=0;i<t.size();i++){
            mapT[t[i]-'a']++;
        }

        for(int x=0;x<26;x++){
            if(mapS[x]!=mapT[x]){
                return false;
                break;
            }
        }
        return true;
    }
};