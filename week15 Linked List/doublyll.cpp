#include <iostream>
using namespace std;

struct node{
    node *next;
    node *prev;
    int data;

}*head=NULL;

void insert(int arr[],int n)
{
    node *last,*t;
    head =new node;
    head->data=arr[0];
    head->prev=NULL;
    head->next=NULL;
    last=head;   

for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
int length(struct node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;

    }
    return count;
}

void insertatanyplace(struct node *p,int index,int x)
{
    struct node *t;
    t=new node;
    if(index<0||index>length(p))
    return ;
    
    if(index==NULL)
    {
       t->data=x;
       t->prev=NULL;
       t->next=head;
       head->prev=t;
       head=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        p=p->next;
        
        t->data=x;
        t->prev=p;
        t->next=p->next;

        if(p->next)p->next->prev=t;

        p->next=t;

    }

    

}
void delete_element(struct node *p,int index)
    {
        

        if(index==1)
        {
            head=head->next;
            if(head)head->prev=NULL;
            int x=p->data;
            free(p);
        }

        else{
            for(int i=0;i<index-1;i++)
            p=p->next;

            p->prev->next=p->next;
            if(p->next)p->next->prev=p->prev;
            int x=p->data;

            free(p);
        }

    }


void printll(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int A[3]={1,2,3};
    insert(A,3);

    delete_element(head,1);
    printll(head);
    return 0;

}