//3 stacks each of 100 size
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//global variables
int StackSize=100;
int Buffer[3*100];
int StackPointer[]={-1,-1,-1};//keeping track of top element

int absTopOfStack(int stacknum){
return stacknum*StackSize+StackPointer[stacknum];
}

void Push(int stacknum,int data){

if(StackPointer[stacknum]+1 > StackSize)
	{cout << "Exception:" << "Stack is at its limit" << endl;exit(0);}
else
	{ StackPointer[stacknum]++;
	//put value after calculation
		Buffer[absTopOfStack(stacknum)]=data;}

}

int Pop(int stacknum){

	if(StackPointer[stacknum]== -1){
		cout << "Exception: stack " <<stacknum << "is empty" << endl;exit(1); //and exit
	}
	else{

		int value= Buffer[absTopOfStack(stacknum)];
		Buffer[absTopOfStack(stacknum)]=0; //clear index
		StackPointer[stacknum]--;
		return value;
	}

}

int Peek(int stacknum){

	int index = absTopOfStack(stacknum);
	return Buffer[index];
}

bool isEmpty(int stacknum){
	return (StackPointer[stacknum]==-1);

}





int main(){

cout <<"let's fill the stack now" << endl;

int stacknum;
int value;
// while(true){
// cout << "Enter your choice" << endl;
// cout << "1.push" << endl << "2.pop" << "3.peek" << endl;
// switch 

// Case 1:
	

// }
Push(0,1);
cout << endl;
cout << Peek(0); 
cout << endl;
Push(1,1);
cout << endl;
cout << Peek(1);
cout << endl;
Push(1,2);
cout << endl;
cout << Pop(1);
cout << endl;
cout << Peek(1);

return 0;
}


//errors:
//declare function in lexical order so that each find one another 