#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//will solve in ruby later //do remember

int main() {
    
	long long int  testcases,n,m,c,chocolates,wrappers,wrapper_recursive;
    cin >> testcases;
    while(testcases--){
    cin >> n >> c >> m ;
        chocolates = n /c;
        wrappers = n/c;
	
        while(wrappers >= m){
        chocolates= chocolates+ (wrappers /m);
	wrapper_recursive=wrappers%m;
        wrappers=(wrappers / m)+ wrapper_recursive; }
        cout << chocolates << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   //look above
    return 0;
}

