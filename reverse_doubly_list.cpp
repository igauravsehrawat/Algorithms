#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node* prev;
};/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{
    Node *temp=new Node;
    temp=head;
    Node *prev,*next,*tail;
    //cout << head->data << endl;
 
    tail=head;
   while(tail!=NULL){//exit condidtion go on to the last NULL
   	
   	next=temp->prev;
 
   	prev=temp->next;
   	next=temp->prev;
   	temp->prev=prev;
   	temp->next=next;
   	tail=tail->prev;
   	if(tail!=NULL)
   	temp=tail; //remember this
   	//cout << temp->data << endl;
 
   }
 //clean code

   return temp; //read  the starting point
    // Complete this function
    // Do not write the main method. 
}Node* Insert(Node *head, int data)
{
	Node *temp = new Node();
	temp->data = data; temp->prev = NULL; temp->next = NULL;
	if(head == NULL) return temp;
	head->prev = temp;
	temp->next = head;
	return temp;
}
void Print(Node *head) {
	if(head == NULL) return;
	while(head->next != NULL){ cout<<head->data<<" "; head = head->next;}
	cout<< head->data<<" ";
	while(head->prev != NULL) { cout<<head->data<<" "; head = head->prev; }
	cout<< head->data<<"\n";
}
int main()
{
	int t; cin>>t;
	Node *head = NULL;
	while(t--) {
	   int n; cin>>n;
           head = NULL;
	   for(int i = 0;i<n;i++) {
		   int x; cin>>x;
		   head = Insert(head,x);
	   }
	   head = Reverse(head);
	   Print(head);
	}
}