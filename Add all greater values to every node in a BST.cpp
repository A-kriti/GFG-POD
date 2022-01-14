// ques - https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1#


/*
Node structure is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// modify the BST and return its root

void add(int *ans,Node *root){
    
    if(root==NULL)return;
    
    add(ans,root->right);
    *ans+=root->data;
    root->data=*ans;
    add(ans,root->left);
    
}


Node* modify(Node *root)
{
    Node *curr=root;
    int ans=0;
    add(&ans,curr);
    
    return root;
}
