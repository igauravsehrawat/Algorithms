    #include <iostream>
    #include<cstdio>
    #include<cstdlib>
    using namespace std;
    struct Node
    {
	int data;
	Node *next;
    };/*
    Merge two sorted lists A and B as one linked list
    Node is defined as 
    struct Node
    {
     int data;
     struct Node *next;
    }
    */
 Node* MergeLists(Node *headA, Node* headB)
{
      Node *temp,*next,*head;
      if(headA->data<headB->data){
	head=headA;
	next=headB;
	temp=headA->next;
	headA->next=next;
	headB=headB->next;
	headA=headA->next;
      }
    else{
      head=headB;
      temp=headB->next;
      next=headA;
      headB->next=next;
      headA=headA->next;
      }
    while(headA!=NULL && temp!=NULL){
      // if(headB!=NULL){
      if(headA->data<temp->data){
	next=headB;
	headA->next=next;
	headA=headA->next;
	headB=headB->next;}
       
       else{
	while(headB!=NULL){
	  if(temp!=NULL){
	  if(headB->data < temp->data){
	    next=headB;
	headA->next=next;
	headB=headB->next;
	headA=headA->next;
	  }
	  else {//headB > than temp
	next=temp;
	headA->next=temp;
	temp=temp->next;
	headA=headA->next;
      }
	  }
	  else {
	    headA->next=headB;
	    break;
	  }
	}
       }
      // }//big dad if
    /*  else{
	headA=headA->next;
	break;
    }*/
    }//big dad while
    return head;

  // This is a "method-only" submission. 
  // You only need to complete this method 
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
        cout<<"\n";
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
		A = MergeLists(A,B);
		Print(A);
	}
}
