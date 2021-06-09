#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;
};

void insertatfront(Node** head_ref,int value)
{
    Node* new_node=new Node();
    new_node->data=value;
    new_node->prev=nullptr;
    new_node->next=(*head_ref);
    if((*head_ref)!=nullptr)
        (*head_ref)->prev=new_node;
    (*head_ref)=new_node;
}

void deletenode(Node** head_ref,Node* ptrtodel)
{
    if((*head_ref)==nullptr || ptrtodel==nullptr)
        return;

    if((*head_ref)==ptrtodel)
        (*head_ref)=ptrtodel->next;
    if(ptrtodel->next!=nullptr)
        ptrtodel->next->prev=ptrtodel->prev;
    if(ptrtodel->prev!=nullptr)
        ptrtodel->prev->next=ptrtodel->next;
    free(ptrtodel);
    return;
}

bool searchnode(Node** head_ref,int value)
{
    Node* temp=(*head_ref);
    while(temp!=nullptr)
    {
        if(temp->data==value)
            return true;
        temp=temp->next;
    }
    return false;
}

void printlist(Node* head_ref)
{
    while(head_ref!=nullptr)
    {
        cout<<head_ref->data;
        if(head_ref->next!=nullptr)
            cout<<"<->";
        head_ref=head_ref->next;
    }
}

int main()
{
    Node* head=nullptr;
    insertatfront(&head,5);
    insertatfront(&head,4);
    insertatfront(&head,3);
    insertatfront(&head,2);
    insertatfront(&head,1);
    if(searchnode(&head,6))
        cout<<"Yes,element is present in double linked list";
    else
        cout<<"No,element is not present in double linked list";
    printlist(head);
    cout<<"\n";
    deletenode(&head,head->next->next);
    printlist(head);
}
