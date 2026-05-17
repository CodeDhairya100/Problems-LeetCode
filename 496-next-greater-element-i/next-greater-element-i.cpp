class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> v;

        int n = nums1.size();

        for(int i=n-1; i>=0; i--){
            bool found = false;
            bool notFound = false;

            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    found = true;
                }
                if(found==true && nums2[j]>nums1[i]){
                    v.push_back(nums2[j]);
                    notFound = true;
                    break;
                }
            }            
            if(!notFound){
                v.push_back(-1);
            }
        }
        //Reversing that vector
        reverse(v.begin(),v.end());
        return v;
    }
};