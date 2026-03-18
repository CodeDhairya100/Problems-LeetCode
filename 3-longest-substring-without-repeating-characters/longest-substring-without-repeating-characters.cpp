class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> mpp;

        int n=s.length();
        int maxi=0;
        int x=0;

        for(int i=x;i<n;i++){
            char ch=s[i];
            
            if(mpp.find(ch) != mpp.end() && mpp[ch]>=x){
                x=mpp[ch]+1;
            }

            mpp[ch] = i;
            maxi=max(maxi, i-x+1);
            
        }
        return maxi;
    }
};