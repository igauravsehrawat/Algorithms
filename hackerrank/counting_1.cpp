//flowers.cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n,k;
	int numbers[100]={0};
	cin >> n;
	
	while(n--){
		cin >> k;
		numbers[k]++;
	}
	for (int i=0;i< 100; i++){
		cout << numbers[i] << " " ;
	}
    return 0;
}
