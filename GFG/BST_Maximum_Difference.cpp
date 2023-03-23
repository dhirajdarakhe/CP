https://practice.geeksforgeeks.org/problems/e841e10213ddf839d51c2909f1808632a19ae0bf/1

#define ll long long int
class Solution{
public:
    int f(Node * root)
    {
        if(root==NULL) return 1e8;
        if(root->left==NULL&&root->right==NULL) return root->data;
        return min(f(root->left)+root->data, f(root->right)+root->data);
    }
    int maxDifferenceBST(Node *root,int tar){
        // Code here
        ll sum = 0;
        while(root)
        {
            if(root->data == tar) break;
            else if(root->data > tar) 
            {
                sum += root->data;
                root=root->left;
            }
            else  
            {
                sum += root->data;
                root=root->right;
            }
        }
        // node not found
        if(root==nullptr) return -1;
        // node is leaf node;
        if(root->left==NULL&&root->right==NULL) return sum;
        // find which sub tree give max diff
        ll diff = INT_MIN;
        // try left s-tree
        diff = max(diff, sum - f(root->left));
        // cout<<diff<<endl;
        // try right s-tree;
        diff = max(diff, sum - f(root->right));
        // cout<<diff<<endl;
        // then return max diff
        return diff;
    }
};
