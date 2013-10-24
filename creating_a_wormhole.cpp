
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

long long int testcases,a_i,n,last,sum,sides,side;
vector<long long int > debris;
cin >> testcases;
while(testcases--){
	cin >> sides;
	while(sides--){
	//	vector<long long int> debris;
	cin >> side;
	debris.push_back(side);
			}
	sort(debris.begin(),debris.end());
	for(long long int j=debris.size();j>=1;j--){
		
	 last=debris.back();
	sum= std::accumulate(debris.begin(),debris.end(),0) - last;
	//	cout << sum << endl ; 
	//	cout << last << endl;
	if (	j <3) {
	cout << "-1" << endl;break;}
	if(last < sum)	{	
	cout << debris.size();
	break;}
	else
	debris.pop_back();
	
		}
		debris.clear();

	}	
	return 0;
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
// crap    return 0;}

