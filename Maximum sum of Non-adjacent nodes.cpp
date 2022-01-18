// ques - https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1

//Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    
    unordered_map<Node*,int>t;
    int getMaxSum(Node *root) 
    {
        // Add your code here
        if(!root)return 0;
        
        if(t[root])return t[root];
        
        int include=root->data;
        if(root->left){
            include+=getMaxSum(root->left->left);
            include+=getMaxSum(root->left->right);
        }
        if(root->right){
            include+=getMaxSum(root->right->left);
            include+=getMaxSum(root->right->right);
        }
        
        int exclude=getMaxSum(root->left)+getMaxSum(root->right);
        
        t[root]=max(include,exclude);
        
        return t[root];
        
    }
};
