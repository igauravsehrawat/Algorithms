#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
	long  long int n,k,candies,maximum,minimum,fairness;
	vector<long long int> insertcandies;
	cin >> n >> k;
	
		while(n--){
		cin >> candies;
		insertcandies.push_back(candies);
		
		sort(insertcandies.begin(),insertcandies.end());
		maximum=insertcandies[0];
		minimum=insertcandies[0];
		for(long long int i =0;i<k-1;i++){
		
		
		maximum = max(maximum,insertcandies[i+1]);
		minimum=min(minimum,insertcandies[i+1]);
		}
		
		
	//	cout <<  maximum-minimum << endl;
			}
		cout << maximum-minimum << endl;

    return 0;
}

