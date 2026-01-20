class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=0;

        for(int x=0;x<arr.size();x++){
            if(arr[max]<arr[x]){
                max=x;
            }
        }
        return max; 
    }
};