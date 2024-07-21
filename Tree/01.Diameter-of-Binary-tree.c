/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b) {
    return (a > b) ? a : b;
}

int heightAndDiameter(struct TreeNode* node, int* diameter) {
    if (node == NULL) {
        return 0;
    }

    int leftHeight = heightAndDiameter(node->left, diameter);
    int rightHeight = heightAndDiameter(node->right, diameter);

    *diameter = max(*diameter, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) + 1;
}

int diameterOfBinaryTree(struct TreeNode* root) {
    int diameter = 0;
    heightAndDiameter(root, &diameter);
    return diameter;
}