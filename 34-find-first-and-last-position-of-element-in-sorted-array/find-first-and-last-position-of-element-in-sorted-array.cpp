class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans={-1,-1};

        if(nums.size()==0){
            return {-1,-1};
        }

        for (int x=0;x<nums.size();x++){
            if(nums[x]==target){
                ans[0]=x;
                break;
            }
        }
        for(int y=(nums.size()-1);y>=0;y--){
            if(nums[y]==target){
                ans[1]=y;
                break;
            }
        }
        return ans;
    }
};