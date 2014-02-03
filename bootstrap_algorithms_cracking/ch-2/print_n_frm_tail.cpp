#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};


int GetNode(Node *head,int positionFromTail)
{
   int length=0,tail_pos;
   	Node *temp_get,*temp_pos_tail;
   	temp_get=new Node();temp_get=head;

    temp_pos_tail=new Node();
   	temp_pos_tail=head;

   	while(temp_get->next!=NULL){
   		length++;
   		temp_get=temp_get->next;
   	}
   	tail_pos=length-positionFromTail;
   	while(tail_pos--){
   		temp_pos_tail=temp_pos_tail->next;
   	}
   	return temp_pos_tail->data; 
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}


int GetNode2(Node *head,int positionFromTail,int& i){

  if(head == NULL){
    return NULL;
  }

  Node * nd = GetNode2(head->next,positionFromTail,i);
  i = i+1;
  if (i ==positionFromTail){
    return head;
  }

return nd ;

}

void Print(Node *head)
{
	bool ok = false;
	while(head != NULL)
	{
		if(ok)cout<<" ";
		else ok = true;
		cout<<head->data;
		head = head->next;
	}
}

Node* Insert(Node *head,int x)
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
		Node *A = new Node();
    A=NULL;
		int m;cin>>m;
		while(m--){
			int x; cin>>x;
			A = Insert(A,x);}
		int n;cin>>n;
		cout<<GetNode(A,n)<<"\n";
    int i = 0;
    Node *B = new Node();
    B=GetNode2(A,n,i);




    cout << B->data << endl; 
	}
}
