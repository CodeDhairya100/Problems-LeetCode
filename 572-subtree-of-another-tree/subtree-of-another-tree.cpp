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

    bool isIdentical(TreeNode* Node1, TreeNode* Node2){

        if(Node1 == NULL||Node2 == NULL){
            return Node1 == Node2;
        }
        bool isLeftSame = isIdentical(Node1->left, Node2->left);
        bool isRightSame = isIdentical(Node1->right, Node2->right);
        return isLeftSame && isRightSame && Node1->val==Node2->val;

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root == NULL || subRoot == NULL){
            return root == subRoot;
        }

        if(root->val == subRoot->val && isIdentical(root,subRoot)){
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};