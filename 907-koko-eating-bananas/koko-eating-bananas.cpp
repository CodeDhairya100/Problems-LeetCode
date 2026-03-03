class Solution {
public:
    long long totalHours(vector<int> &arr,int mid){
        long long totalHrs=0;
        int n=arr.size();
        for(int i=0;i<=n-1;i++){
            totalHrs+=(arr[i]+mid-1)/mid;
        }
        return totalHrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high = *max_element(piles.begin(), piles.end());

        while(low<=high){
            int mid=low + (high - low) / 2;
            long long hrs=totalHours(piles,mid);

            if(hrs <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }    
};