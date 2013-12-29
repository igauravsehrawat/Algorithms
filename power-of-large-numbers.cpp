#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  long long int a,b,price,modulo=1000000007;
  int testcases;
  cin >> testcases;
  while(testcases--){
    cin >> a >> b;
    price=a;
    for(int i=0;i<b-1;i++){
      price=price*a;
      //shit happens
      //do take care that fucking shit does not happens again      cout << price << endl;
      //modulo logic
      if(price>modulo)price=price%modulo;}
    cout << price;
    price=0;
    
  }

	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
