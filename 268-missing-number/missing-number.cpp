class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int i=1;
        int n=nums.size()-1;
        int ans=0;

        if(nums.size()==1 && nums[0]==0){
            return ans+1;
        }
        while(i<=n){
            int next=i;
            if(nums[0]!=0){
                break;
            }
            if(nums[i-1]+1 != (nums[next])){
                ans=nums[i-1]+1;
                break;
            }
            else if(i==n){
                ans=nums[n]+1;
            }
            i++;
        }
        return ans;
    }
};