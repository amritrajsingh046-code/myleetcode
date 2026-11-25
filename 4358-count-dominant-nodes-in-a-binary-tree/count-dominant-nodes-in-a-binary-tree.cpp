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
    int cnt = 0;

    int f(TreeNode* root) {
        if(root == NULL) {
            return INT_MIN;
        }

        int l = f(root->left);
        int r = f(root->right);

        int maxi = max(root->val, max(l, r));

        if(root->val == maxi) {
            cnt++;
        }

        return maxi;
    }

    int countDominantNodes(TreeNode* root) {
        cnt = 0;
        f(root);
        return cnt;
    }
};