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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()){
            return NULL;
        }
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        auto it=find(nums.begin(),nums.end(),temp[temp.size()-1]);
        int index=it-nums.begin();
        TreeNode* root=new TreeNode(temp[temp.size()-1]);
        vector<int> left(nums.begin(),nums.begin()+index);
        vector<int> right(nums.begin()+index+1,nums.end());
        root->left=constructMaximumBinaryTree(left);
        root->right=constructMaximumBinaryTree(right);
        return root;
    }
};