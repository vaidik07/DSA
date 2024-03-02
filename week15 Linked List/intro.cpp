#include <iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;
};

int main(){
    node * a =new node;
    a->value=10;
    node * b = new node;
    b->value=20;
    a->next=b;
    b->next=NULL;
    node*temp=a;
    
    while(temp!=NULL){
        
        cout<<temp->value<<" ";
        temp = temp->next;
    
    }
    
}