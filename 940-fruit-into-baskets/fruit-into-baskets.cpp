class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0;
        int l=0;
        int r=0;
        unordered_map<int,int>mpp;

        while(r<fruits.size()){

            mpp[fruits[r]]++;

            // when window size should be reduced
            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){     //  Just in case, but it won't affect the code 
                    mpp.erase(fruits[l]);  //  if it is not present.
                }
                l++;
            }
            
            maxi= max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};