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
while(*p){
len++;++p;
cout << *p << endl;
//cout << len;
}

cout << len;
//this puts out the reverse string
for(int i=len-1;i>=0;i--){
	cout << str[i];
}

}


void reverse_pro_style(char *str){
	char* end = str;
	char tmp;

	if(str){

		while(*end){
			++end;
		}
		--end; //the last character is null so have to skip that
	}

	while(str < end){
		tmp = *str;
		*str++ = *end;
		*end-- = tmp;
		//str++; end--;
	}

cout << str <<" " << end <<  endl;

}







int main() {

char* str;
char* str_input;
//let's use null terminated string with its output
//getline(cin,str_input); cin does not work
//scanf("%s",str_input);
cin >> str_input;
str = &str_input[0];
cout << *str << endl ;
//cout << &str << endl; //this passes the address

//cout << reverse(str) << endl;
reverse_pro_style(str);

	return 0;
}
