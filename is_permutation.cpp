//is_permutation.cpp
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;
bool is_permutation(string s1,string s2){

	string sorted_s1,sorted_s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());//sleek cuts
	//cout << s1 << " " << s2 << endl;

	if(s1==s2)
		return true;
	else
		return false;

}

bool permutationgood(string s1,string s2){
	//calculate character count
int character[256]={0}; //intially all count is zero
	
	int	s1_len=s1.length();
		for (int i=0;i<s1_len;i++){
			character[int(s1[i])]++;
		}
	
	int character2[256]={0};
	int s2_len=s2.length();
		for (int j=0;j<s2_len;j++){
			if(--character[int(s2[j])] < 0) //the awesome code
				return false;
		}

		return true;
	}


int main() {

string s1,s2;
int testcases;
cout << "Enter testcases" << endl;
cin >> testcases;
while(testcases--){
cin >> s1 >> s2;
permutationgood(s1,s2);
bool result;
result=is_permutation(s1,s2);
cout << result << endl;

	if(result==true && permutationgood(s1,s2))
		cout << "strings are permutation of each other . Keep Calm" << endl;
	else
		cout << "Strings aren't permutation of each other" << endl;
}

	return 0;
}