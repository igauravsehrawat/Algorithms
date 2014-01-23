//reverse_string.cpp

//interview question2

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;


void reverse(char* str){

//int len; do without using length function
	int len=0;
char* p =str;
while((*p)++ != '\0'){
len++;
cout << *p << endl;
//cout << len;
}
cout << len;	
//this puts out the reverse string
for(int i=len-1;i>=0;i--){
	cout << str[i];
}

}


int main() {

char* str;
char* str_input;
//let's use null terminated string with its output
//getline(cin,str_input); cin does not work
scanf("%s",str_input);
str = &str_input[0];
cout << *str << endl ;
//cout << &str << endl; //this passes the address

//cout << reverse(str) << endl;
reverse(str);
cout << endl;
	return 0;
}
