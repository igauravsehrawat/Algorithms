//prime_check.cpp
#include <iostream>
#include  <cmath>
#include <string>
using namespace std;


string check_prime(int n){
double sqroot=sqrt(n);
int loop_i=2;
	while(loop_i<sqroot){
		if(n%loop_i==0)
			return "not a";
		loop_i++;
	}
	return "a";
}
int main(){
int n;
cin >> n;

cout << "The give number is " << check_prime(n) << " prime" << endl;


return 0;

}
