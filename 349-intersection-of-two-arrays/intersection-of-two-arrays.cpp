class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3;

        for(int x=0; x<nums1.size(); x++){
            int sel1=nums1[x];
            for(int y=0; y<nums2.size(); y++){

                if(sel1==nums2[y]){
                    // check duplicate
                    if(find(nums3.begin(), nums3.end(), sel1)==nums3.end()){
                        nums3.push_back(sel1);
                    }                        
                }
            }
        }
        return nums3;
    }
};
