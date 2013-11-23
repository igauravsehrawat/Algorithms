#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node *head){
	int count=0;
	Node *slow_temp,*fast_pointer;
	slow_temp=new Node();
	slow_temp=head;fast_pointer=head;
	if(slow_temp==NULL)
		return 0;
	else{
	while(slow_temp && fast_pointer !=NULL){
		slow_temp=slow_temp->next;
		fast_pointer=fast_pointer->next->next;
			if(slow_temp==fast_pointer)return 1;
				}
				return 0;
			}
}


int main()
{
	Node *A, *B, *C, *D,*E,*F;
	A = new Node();	B= new Node();  C= new Node(); D = new Node(); E = new Node(); F= new Node();
	// case 1:  NULL list 
	if(HasCycle(NULL)) cout<<"1";
	else cout<<"0";
	//case 2:
	A->next = B; 
	B->next = C;
	C->next = A;
	if(HasCycle(A)) cout<<"1";
	else cout<<"0";
	//case 3:  
	A->next = B; B->next = C; C->next = D; D->next = E; E->next = F; F->next = E;
	if(HasCycle(A)) cout<<"1";
	else cout<<"0";
	//case 4:
	A->next = B; B->next = C; C->next = D; D->next = E; E->next = F; F->next = NULL;
	if(HasCycle(A)) cout<<"1";
	else cout<<"0";
	// case 5:
	A->next = B; B->next = C; C->next = D; D->next = E; E->next = F; F->next = A;
	if(HasCycle(A)) cout<<"1";
	else cout<<"0";
}