//ll_palindrome.cpp

#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

int main(){


bool isPalindrome(node **left,node *right){

	if(right == NULL)//stop recursion if right is null
		return true;


	bool isp = isPalindrome(left,right->next);

	if (isp == false)

		return false;

	bool ispl = ((*left->data) == (*right->data));

	*left = *left->next;
	return ispl;

	

}

bool isPalindrome(node *head){
	isPalindrome(&head,head); //start with pointer as the same
}


	return 0;
}

