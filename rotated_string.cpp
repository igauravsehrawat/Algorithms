//rotated_string.cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string isSubstring(string s1,string s2){
int len1=s1.length();
int len2=s2.length();int count=0;
for(int i =0;i<len2;i++){
	for(int j=0;j<len1;j++){

		if(s2[i]==s1[j]){
			count++;i++;

		if(count==s2.length())
	return "true";
		}
		else
			count=0;
	}
}
cout << count << endl;
return "false";
}

int main() {


//xyxy pattern

	string s1,s2;
	cin >> s1 >> s2;
	s1 += s1;
	//bool fus = isSubstring(s1,s2);
	cout << s1 << " " << s2 << endl;
cout << isSubstring(s1,s2)  << " " <<endl ;
	return 0;

}