#include <iostream>
using namespace std;

struct node{
    int data;
    struct node * next;
}*head;

void create(int A[],int n)
{
    int i;
    struct node *temp,*last;
    head= new node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;

    }


}

void removeduplicates()
{
    
}

void deletelinklist(struct node *p,int index)
{
    if(index==1)
    {
    p=head;
    while(p->next!=head)
    p=p->next;

    p->next=head->next;
    head->next=NULL;
    delete head;
    head=p->next;
    }


    else
    {
    for(int i=0;i<index-2;i++)
    p=p->next;
    
    struct node*q;
    q=p->next;
    p->next=q->next;
    q->next=NULL;
    delete q;
    }
     
}

void display(struct node *p)
{
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(head!=p);
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    create(arr,7);
    display(head);
    deletelinklist(head,1);
    display(head);
}