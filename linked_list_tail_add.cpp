#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
struct Node
{
	int data;
	Node *next;
};/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    
    Node* temp1;
    temp1=new Node();
    Node* temp2;
   temp2=new Node();
    
//    temp2=head;
    
            if(head==NULL){
            temp1->data=data;
            temp1->next=NULL;
            head=temp1;
            return head;
            }
		
                else{
		temp2=head;
                    while(temp2->next!=NULL){
                     
                    temp2=temp2->next;
                            }
              //head->next=temp2->next;}
     temp1->data=data;
	temp1->next=NULL;
	temp2->next=temp1;
        return head;
                }
        
  // Complete this method
}void Print(Node *head)
{
	Node *temp = head;
	while(temp!= NULL){ cout<<temp->data<<"\n";temp = temp->next;}
}
int main()
{
	int t;
	cin>>t;
	Node *head = NULL;
	while(t-- >0)
	{
		int x; cin>>x;
		head = Insert(head,x);
	}
	Print(head);
}
