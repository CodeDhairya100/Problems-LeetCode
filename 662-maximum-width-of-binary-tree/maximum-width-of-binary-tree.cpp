/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int widthOfBinaryTree(TreeNode* root) {

        if(!root) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root,0});

        int maxWidth = 0;

        while(q.size()>0){
            int currSize = q.size();

            unsigned long long endIdx = q.back().second;
            unsigned long long stIdx = q.front().second;

            maxWidth = max(maxWidth,(int)(endIdx-stIdx+1));

            for(int i=0; i<currSize; i++){
                auto store = q.front();
                q.pop();
                
                TreeNode* node = store.first;
                unsigned long long currIdx = store.second; // The actual parent's index
                
                // FIX 2: Use currIdx to assign the correct index to children
                if(node->left){
                    q.push({node->left, currIdx * 2 + 1});
                }
                if(node->right){
                    q.push({node->right, currIdx * 2 + 2});
                }
            }
        }
        return maxWidth;
    }
};