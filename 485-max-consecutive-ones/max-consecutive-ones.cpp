class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unordered_map<int,int> mpp;

        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                mpp[1]++;
            } 
            if(nums[i]==0){
                mpp[1]=0;
            }  
            maxi=max(maxi,mpp[1]);
        }
        return maxi;
    }
};