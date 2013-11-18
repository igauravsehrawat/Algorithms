#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *tempA,*tempB;
    tempA=headA;tempB=headB;
    if((tempA==NULL && tempB!=NULL) || (tempA!=NULL && tempB==NULL)){
    return 0;
    }
       else{
           while(tempA!=NULL && tempB!=NULL){
           
               if(tempA->data==tempB->data){
               tempA=tempA->next;
               tempB=tempB->next;}
               else{
               return 0;}
           }
           if(tempA==tempB) return 1;//only when it has reached the end
           else return 0;
           
       }
    
    
    
  // This is a "method-only" submission. 
  // You only need to complete this method 
}Node* Insert(Node *head,int x)
{
   Node *temp = new Node();
   temp->data = x;
   temp->next = NULL;
   if(head == NULL) 
   {
       return temp;
   }
   Node *temp1;
   for(temp1 = head;temp1->next!=NULL;temp1= temp1->next);
   temp1->next = temp;return head;
}
int main()
{
	int t;
	cin>>t;
	while(t-- >0)
	{
		Node *A = NULL;
		Node *B = NULL;
		int m;cin>>m;
		while(m--){
			int x; cin>>x;
			A = Insert(A,x);}
		int n; cin>>n;
        while(n--){
			int y;cin>>y;
			B = Insert(B,y);
		}
		cout<<CompareLists(A,B)<<"\n";
	}
}
