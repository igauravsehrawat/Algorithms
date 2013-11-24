#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main(){
	int check_for_power_2,testcases;
	cin >> testcases;
	while(testcases--){	
	cout << "enter any number " << endl;

	cin >> check_for_power_2;
	if(check_for_power_2 && !(check_for_power_2&check_for_power_2 - 1))
		//when true
		cout <<  "this is number is counted as in power of 2" << endl;
		else
			//when false
			cout << "beep beep wrong answer" << endl;
	}
	return 0;
}