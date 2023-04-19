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


void display()