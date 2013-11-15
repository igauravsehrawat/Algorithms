#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    int track=0;
    int previous_node=position-1;
    Node* temp =new Node();
    if(head==NULL){
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
    }
        else{
            Node* temp2= new Node();
                temp2=head;
            while(position > track){
            position--;    
             temp2=temp2->next;
                           
            }
            temp->data=data;
            temp->next=temp2;
            Node* previous=new Node();
            previous=head;
            
            if(previous_node==-1){
            return temp;}
            else{
            while(previous_node > track){
            previous_node--;
                previous=previous->next;
                 }
                previous->next=temp;
                return head;
            }
            
        
        
        
        }
}void Print(Node* head)
{
	while(head != NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}

int main()
{
	int t;
	cin>>t;
	    Node *head = NULL;
		 head = new Node();
		 head->data = 2;
		 head->next = NULL;
	while(t-- >0){
		int x,n; cin>>x>>n;
		 head = InsertNth(head,x,n);
	}
	 Print(head);
	   cout<<"\n";

}
