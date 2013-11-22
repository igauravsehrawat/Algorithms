#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){

  int testcases,count=0,height=1,iterations;
	cin >> testcases;
	while(testcases--){
	  cin >> iterations;
	  for(int i=1;i<=iterations;i++){
	    if(i%2==0)height=height+1;
	    else height=2*height;
	      
	    
	  }
	  cout << height << endl;
	  height=1;count=0;
	}
return 0;
}

