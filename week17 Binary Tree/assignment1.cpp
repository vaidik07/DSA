#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int findMin(Node *root , long long min)
{
    if(root == NULL) return min;
    if(min>root->val) min=root->val;

    findMin(root->left , min);
    findMin(root->right , min);

    
}

int product(Node *root)
{
    if(root == NULL) return 1;

    return root->val*product(root->left)*product(root->right);
}

bool isBalanced(Node* root)
{

    if(root == NULL) return true;
    int rightLevel = levels(root->left);
    int leftLevel = levels(root->right);
    int ans = abs(leftLevel - rightLevel);
    if(ans>1) return false;
    bool leftTree = isBalanced(root->left);
    bool rightTree = isBalanced(root->right);
    if(leftTree == false || rightTree == false) return false;

    return true;

}



void displayTree(Node *root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);


}

int levels(Node* root)
{
    if(root== NULL) return 0;
    return 1 + max(levels(root->right) , levels(root->left));
}

int main()
{
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);
    Node *f=new Node(6);
    Node *g=new Node(7);

    a->left = b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left = f;
    c->right=g;

    displayTree(a);
    cout<<endl;
    cout<<"The product of the tree is:"<<product(a)<<endl;
    cout<<findMin(a , INT_MAX);


}