class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxi=0, maxFre=0;

        vector<int> hash(26,0);

        for(int r=0;r<s.length();r++){
            int chNum=s[r]-'A';

            hash[chNum]++;
            maxFre = max(maxFre,hash[chNum]);

            if((r-l+1)-maxFre > k){
                hash[s[l]-'A']--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};