class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int x=0; x<nums2.size(); x++){
            int el = nums2[x];
            nums1.push_back(el);
        }

        //sorting done outside the progrm
        sort(nums1.begin(),nums1.end());

        int m = nums1.size();

        if(m%2==0){
            int mid1= (m/2);
            int mid2= (m/2)-1;
            return ((nums1[mid1]+nums1[mid2])/2.0);
        }
        return nums1[m/2];
        
    }
};