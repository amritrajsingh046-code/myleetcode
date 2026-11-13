class Solution {
public:
    void inorder(Node* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }

        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }

    vector<int> merge(Node* r1, Node* r2) {
        vector<int> a1, a2;

        inorder(r1, a1);
        inorder(r2, a2);

        vector<int> ans;

        for (int i = 0; i < a1.size(); i++) {
            ans.push_back(a1[i]);
        }

        for (int i = 0; i < a2.size(); i++) {
            ans.push_back(a2[i]);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};