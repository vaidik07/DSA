#include <iostream>
#include <algorithm>
#include <queue> 
using namespace std;

class Node{
        public:
        int val;

    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

int level(Node *root)
{
    if(root==NULL) return 0;
    return 1+max(level(root->left) , level(root->right));
}

void preorder(Node *root){   //RLR
    if(root==NULL) return ;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root){   //LRR
    if(root==NULL) return ;
    preorder(root->left);
    cout<<root->val<<" ";
    preorder(root->right);
}
void postorder(Node *root){
    if(root==NULL) return ;
    preorder(root->left);
    preorder(root->right);
    cout<<root->val<<" ";
}

void printElementsofNTHLVL(Node *root , int count , int level)
{
    if(root==NULL) return ;
    if(count==level) cout<<root->val<<" ";
    printElementsofNTHLVL(root->left , count +1 , level);
    printElementsofNTHLVL(root->right , count+1 , level);
}

void levelOrder(Node *root)
{
    int n=level(root);
    cout<<n<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        printElementsofNTHLVL(root , 1 , i);
    }
}

void levelOrderQueue(Node* root) //BFS
{
    queue<Node*> q;
    q.push(root);
    while(q.size()>0)
    {
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    cout<<endl;
}


int main(){
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

    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
    cout<<endl;
    printElementsofNTHLVL(a,1,2);
    cout<<endl;
    levelOrder(a);
    cout<<endl;
    levelOrderQueue(a);
    
    

}