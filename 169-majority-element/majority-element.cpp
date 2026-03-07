class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> major;

        int freq=0;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            major[nums[i]]++;
        }

        for(auto i:major){
            if(i.second>freq){
                freq=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};