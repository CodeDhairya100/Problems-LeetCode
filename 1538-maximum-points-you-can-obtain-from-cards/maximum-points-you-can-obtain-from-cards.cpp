class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // [ 6 2 3 4 7 2 1 7 1 ]
        int n=cardPoints.size();

        int lsum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }

        int maxSum=lsum;

        int rsum=0;
        for(int i=1;i<=k;i++){
            lsum -= cardPoints[k-i];
            rsum += cardPoints[n-i];
            maxSum=max(maxSum,(lsum+rsum));
        }
        return maxSum;
    }
};