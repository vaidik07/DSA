#include <iostream>
using namespace std;

//Q1 Option 4
//Q2 Option 4

//Q3
class Node{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LL{
    public:
    Node* head;
    int size;

    LL(){
        head=NULL;
        size=0;
    }

    void insertAtHead(int val)
    {
        Node* temp=new Node(val);
        temp->next = head;
        head = temp;  
        size++;  
    }

    void insertAtTail(int val)
    {
        Node* temp=new Node(val);
        Node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next=temp; 
        size++; 
    }

    void insertAtIndex(int val , int idx){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;

        else if(idx==size) insertAtTail(val);

        else if(idx==0) insertAtHead(val);

        else{
            Node * temp = new Node(val);
            int count=0;
            Node* ptr = head;
            while(count!=idx-1)
            {
                ptr = ptr->next;
                count++;
            }
            temp->next=ptr->next;
            ptr->next=temp;
            size++;
        }
    }

    void display()
    {
        Node* temp = head;
         while(temp!=NULL){
        
        cout<<temp->val<<" ";
        temp = temp->next;
    
    }
    }
};


int main()
{
    LL yo;
    yo.insertAtHead(10);
    yo.insertAtTail(20);
    yo.insertAtTail(40);
    yo.insertAtIndex(30 ,2 );
    yo.display();
}