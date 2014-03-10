//flowers.cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n,k;
	cin >> n >> k;
	int prices[100]={0};int price,final_price=0;
	for(int fetch=0;fetch<n ;fetch++){
		
		cin >> prices[fetch];

	}
  sort(prices,prices+n,greater<int>());
	//cout << "starting processing" << endl;
	for (int process=0;process<n;process++){

			
			final_price=final_price+((process/k+1)*prices[process]);
			//floating point exception ==divide by zero
			//cout << process << prices[process]<<  endl;
			//simple formulation for the problem statement itself
			//% = remainder
			// / = quotient
		

	}

	cout << final_price << endl;

    return 0;
}
