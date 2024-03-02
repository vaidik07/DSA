//stack using an array 

#include <iostream>
using namespace std;

struct stack{
int size;
int top ;
int *s;
};

// void createstack(struct stack *st){

//     cout<<"Enter size of stack"<<endl;
//     int sizeofstack;
//     cin>>sizeofstack;
//     st->top=-1;
//     st->s= new int[sizeofstack];

// }

// void display(struct stack st)

// {
//     int i;
//     for(i=st.top;i>=0;i--)
//     cout<<st.s[i]<<endl;
// }
// void push(struct stack *st,int x)
// {
//     if(st->top==st->size-1)
//     cout<<"stack overflown"<<endl;

//     else
//     {
//         st->top++;
//         st->s[st->top]=x;
//     }
// }

// int pop(struct stack *st)

// {
//         int x=-1;
//         if(st->top==-1)
//         cout<<"stack uderflown"<<endl;

//         else
//         {
    
//      x=st->s[st->top--];
//         }
//         return x;
    
    
// }
// int isempty(struct stack st)
// {
//     if(st.top==-1)
//     return -1;

//     return 0;
// }



struct node {
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    node *t=new node;
    if(t==NULL)
    cout<<"satck overflow"<<endl;

    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void pop(struct node *p){
    int x=-1;

   if(top=NULL)
   cout<<"stack is empty";

   else{
    p=top;
    top=p->next;
    x=p->data;
    delete p;}

}
void peek(int position)
{
    struct node *p;
    p=top;
    for(int i=0;i!=NULL && i<=position-1;i++)
    p=p->next;
}

void displaylinklist()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<"  ";
        p=p->next;
    }
}


int main()
{
    // struct stack st;
    // createstack(&st);
    // push(&st,10);
    //     push(&st,20);
    // push(&st,30);
    //     push(&st,40);
    // push(&st,50);
    // pop(&st);4


    // display(st);
push(10);
push(20);
push(30);

displaylinklist();

    return 0;




}