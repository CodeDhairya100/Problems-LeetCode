class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        bool status = true;

        map<int,int> map1;
        for(int i=0;i<ransomNote.size();i++){
            map1[ransomNote[i]-'a']++;
        }   
        int n=ransomNote.size();

        map<int,int> map2;  
        for(int i=0;i<magazine.size();i++){
            map2[magazine[i]-'a']++;           
        }
        int m=magazine.size();

        for(int i=25;i>=0;i--){
            if(map2[i] < map1[i]){
                status = false;
                break;
            }
        }
        return status;
    }
};