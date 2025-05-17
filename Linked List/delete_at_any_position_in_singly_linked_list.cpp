#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void delete_at_any_pos(Node* &head,int indx)
{
    Node* tmp = head;
    for(int i = 1; i<indx; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = deletenode->next;
    delete deletenode;
}
void print_linked_list(Node* head)
{
   Node* tmp = head;
   while(tmp != NULL)
   {
     cout << tmp->val << endl;
     tmp = tmp->next;
   }
} 
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
       cin>>val;
       if(val == -1)
       {
        break;
       }
       insert_at_tail(head,tail,val);
    }
    delete_at_any_pos(head,2);
     
    print_linked_list(head);
    return 0;
}