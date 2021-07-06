//inverting-binary-tree.cpp

#include <iostream>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


TreeNode* invertTree(TreeNode* root) {
    
    if(root == NULL)
        return root;
    
    if(root->left != NULL){
        root->left = invertTree(root->left);
    }
    if(root->right != NULL){
        root->right = invertTree(root->right);
    }
    
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    return root;
}

void preorderTraverse(TreeNode *root){
	cout<<root->val<<" ";
	if(root->left)
		preorderTraverse(root->left);
	if(root->right)
		preorderTraverse(root->right);
}


int main(){
	TreeNode node1(1), node3(3);
	TreeNode node2(2, &node1, &node3);
	TreeNode node6(6), node9(9);
	TreeNode node7(7, &node6, &node9);
	TreeNode node4(4, &node2, &node7);

	cout<<"Initial Tree:";
	preorderTraverse(&node4);

	invertTree(&node4);

	cout<<"\nInverted Tree:";
	preorderTraverse(&node4);
	cout<<endl;

	return 0;
}