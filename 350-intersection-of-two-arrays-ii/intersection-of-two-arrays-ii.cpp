class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3;
        unordered_map<int,int>M;

        for(int x : nums1){
            M[x]++;
        }
        for(int y : nums2){
            if(M[y]>0){
                nums3.push_back(y);
                M[y]--;
            }
        }
        return nums3;
    }
};