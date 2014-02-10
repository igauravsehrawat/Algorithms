#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;
string TRUE="TRUE",FALSE="FALSE";
string IsUnique(string s){
	int stringer[255]={0},len=0;
	len=s.length();
	//cout << len << endl;
	for(int i =0;i<len;i++){
		stringer[int(s[i])]++;
		//cout << stringer[int(s[i])] << endl;
		if(stringer[int(s[i])]> 1)
			return FALSE;
	}
return TRUE;
}

int main(){

string sentence;
char c ;
cin >> sentence;
//cin >> c ;

cout << "The statement that given string is unique is : " << IsUnique(sentence) << " " <<endl;





	return 0;
}