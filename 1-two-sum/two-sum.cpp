class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();

        for(int x=0;x<size;x++){
            for(int y=x+1;y<size;y++){
                
                if(nums[x]+nums[y]==target){
                    return {x,y};                 
                }
            }
        }  
        return {};      
    }
};