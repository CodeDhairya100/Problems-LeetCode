class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int s = 0;
        int n = nums.size();

        // Skip negatives and zeros
        while(s < n && nums[s] <= 0){
            s++;
        }

        if(s == n || nums[s] != 1){
            return 1;
        }

        while(s < n-1){
            if(nums[s+1] == nums[s]){
                s++;
            }
            else if(nums[s+1] - nums[s] == 1){
                s++;
            }
            else{
                return nums[s] + 1;
            }
        }
        return nums[n-1] + 1;
    }
};
