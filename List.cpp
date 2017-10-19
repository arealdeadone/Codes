#include <bits/stdc++.h>
using namespace std;
/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
 */
  struct Node
  {
     int data;
     struct Node *next;
  };
Node* Insert(Node *head,int data)
{
  if(head == NULL){
      head = new Node;
      head->data = data;
      head->next = NULL;
      return head;
  }
  Node * temp;
    temp = head;
    while(head != NULL)
        head = head->next;
    head = new Node;
    head->data = data;
    head->next = NULL;
    return temp;
}

int main()
{
    Node *start = NULL;
    for(int i=1; i<10; i++)
        start = Insert(start, i);
    while(start != NULL)
    {
        cout<<start->data<<"->";
        start = start->next;
    }
}
