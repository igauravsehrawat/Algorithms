//flowers.cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

	string message;int col,row;
	cin >> message;
	int len=message.length();
	if(len %2==0){
	 row=(len<9)?3:floor(sqrt(message.length()));
	 col=(len<9)?3:ceil(sqrt(message.length()));
	}
	else{
	 col=(len<9)?3:floor(sqrt(message.length()));
	 row=(len<9)?3:ceil(sqrt(message.length()));
	}
	
	int flag=0;
	char matrix[row][col];
	//cout << row << "" << col;
	for (int outer=0;outer<row;outer++){
		for(int inner=0;inner<col & flag < len;inner++){

			matrix[outer][inner]=message[flag];
			//cout << message[flag];
			flag++;
		}
	}
	flag=0;//reset
//now print it
	for (int outer=0;outer<col;outer++){
		for(int inner=0;inner<row & flag<len;inner++){
			if(matrix[inner][outer]>=char('a') && matrix[inner][outer]<=char('z')){
				cout<<matrix[inner][outer];
				flag++;
				}
			

		}
		cout << " ";
	}

    return 0;
}
//caution
//garbage values !!
//total operations
//range match threshold is 9