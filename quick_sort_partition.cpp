#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
struct Node
{
	int data;
	Node *next;
};



void partition(vector <int>  ar) {

Node* pivot;
pivot =new Node(); //malloc(typeof(Node))();
pivot->data=ar[0];
Node *temp_left,*left_side,*temp_right,*right_side;
temp_left,left_side,temp_right,right_side=new Node();
Node *head_left,*head_right;head_left=new Node(); head_right=new Node();
head_left=left_side;
head_right=right_side;

for( vector<int>::iterator it=ar.begin();it!=ar.end();it++){

	if(pivot->data > *it){
		temp_left=new Node();
		temp_left->data=*it;
		left_side->data=temp_left->data;  //use data
		left_side->next=temp_left; //use pointers

		left_side=left_side->next;
		cout << left_side->data << "left_side:" << " " << *it << "iterator value"  << endl;


	}
//cout ;
	if(pivot->data < *it){
		temp_right=new Node();
		temp_right->data = *it;

		right_side->data=temp_right->data;
		right_side->next=temp_right; // this is binding game
		right_side=right_side->next; 
		cout << right_side->data << "right_side" << " " << *it << "iterator value"  << endl; 

	}

}

left_side->next=pivot;
pivot->next=head_right;
Node *print_list=new Node();	
print_list=head_left;
while(print_list->next!=NULL){//reach the penultimatum node

	cout << print_list->data << " " << print_list->next <<  endl;
	print_list=print_list->next; 
}


}



/* Tail starts here */
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}