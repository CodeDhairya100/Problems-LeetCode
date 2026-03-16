class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol=0;
        int s=0;
        int e=height.size()-1;

            while(s<e){
                
                int area = min(height[s],height[e]) * (e-s);
                maxVol=max(maxVol,area);

                if(height[s]<height[e]){
                    s++;
                }
                else{
                    e--;
                }
            }

        return maxVol;
    }
};