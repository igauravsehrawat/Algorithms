//follow.cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Node
{
	char data;
	struct Node *next;
};


void removeduplicate(Node* start){
//current and runner pointer are good too
	//as the name sis very semantics
	if (start == NULL)
		exit;

	Node* ptr1;
	Node* ptr2;
	Node* dup;
	ptr1=start;
	//ptr2=ptr1;

	while(ptr1 != NULL && ptr1->next !=NULL){
		ptr2=ptr1; // don't forget to reintialize the pointers
		while(ptr2->next != NULL){

			if(ptr1->data == ptr2->next->data){
				cout << "if " << ptr1->data << ptr2->next->data << endl;
				dup = ptr2->next;
				ptr2 = ptr2->next->next;
				free(dup);
				

			}
			else{
				cout << "else " << ptr1->data << ptr2->next->data << endl;
				ptr2= ptr2->next;
				
			}

		}
		ptr1 = ptr1->next;
	}

}


int main() {

	Node* str1;Node *str2;Node *str3;Node *str4;Node *str5;Node *str6;
	str1 = new Node();

	str1->data='F';
	
	str2 = new Node();
	str1->next=str2;
	str2->data='O';


	str3= new Node();
	str3->data='L';
	str2->next = str3;

	str4 =new Node();
	str4->data='L';
	str3->next=str4;

	str5=new Node();
	str5->data='O';
	str4->next=str5;

	str6=new Node();
	str6->data='W';
	str5->next=str6;

	str6->next=NULL;
//the above code sucks interms of implementation and time complexity 
	//hash table much more efficient and better way as it takes O(n) time complexity.
	Node* ptr1=str1,ptr2 ;

	removeduplicate(ptr1);
	cout << "removeduplicate executed" << endl;
	while(ptr1 != NULL){ //common mistake ptr1->next
		cout << ptr1->data << endl;
		ptr1 = ptr1->next;
	}
return 0;
}