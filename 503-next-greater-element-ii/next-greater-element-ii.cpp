class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
         stack<int> s;
         vector<int> NG(n,-1);

         for(int i=2*n-1; i>=0; i--){
            int currNum = nums[i%n];

            while(!s.empty() && s.top()<=currNum){
                s.pop();
            }

            if(i<n){
                if(!s.empty()) NG[i] = s.top();
            }
            s.push(currNum);
         }
        return NG;
    }
};