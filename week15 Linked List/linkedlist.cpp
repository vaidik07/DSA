#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Declare a linked list
struct node{
    
    int data;
    node* next;
}*head,*last;



void insert_last(int element)
{
    node *temp;
    temp=new node;
    temp->data=element;
    temp->next=NULL;
    if(head==NULL)
    {
        head=last=temp;
    }
    else{
        last->next=temp;
        last=temp;

    }
}

void reverse(struct node *q)
{
    node *r,*p;
    p=NULL;
    r=p->next;
    
    while(q!=NULL)
    {
       r=q;
       q=p;
       p=p->next;
q->next=r;    }
    head=q;
}



// void create(int A[],int n)
// {
//     head =new node;
//     struct node *last,*new_node;
//     head->data=A[0];
//     head->next=NULL;
//     last=head;

//     for(int i=1;i<n;i++)
//     {
//         new_node=new node;
//         new_node->data=A[i];
//         new_node->next=NULL;
//         last->next=new_node;
//         last=new_node;
//     }
// }
void printlist(node* p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

//     void count_linkedlist(struct node* p)
//     {
//         int count=0;
        
//         while(p!=NULL)
//         {
//             count++;
//             p=p->next;
//         }
//         cout<<"the nodes in the linked list are:"<<count<<endl;
//     }
// void sum(struct node* p)
// {
//     int sum=0;
// while(p!=NULL)
// {
//     sum+=p->data;
//     p=p->next;
// }
// cout<<"the sum of the linked list is: "<<sum;
// }


int main()
{
//     node* head= NULL;
//     node* last=NULL;
//     node* newnode=NULL;
    
//     head = new node;
//     last = new node;
//     newnode = new node;
//     int num[5];
//     for(int i=0;i<5;i++)
// {
//     cin>>num[i];
//     }
//     newnode->data=num[0];
//     newnode->next=NULL;

//     if(head==NULL)
//     {
//         head=newnode;
//         last=newnode;
    

//     }
// else{

//     last->next=newnode;
//     last=newnode;
// }
int x;
cout<<"enter element"<<endl;
cin>>x;
while(x!=0)
{
    int y=x%10;
    insert_last(y);
    y=y/10;
}
cout<<"linked list created"<<endl;
reverse(head);
printlist(head);
return 0;

    
    



    

}