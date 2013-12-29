//sieve_erathosthenes_prime.cpp
#include <cmath>
#include <iostream>

using namespace std;




int main(){
int n; int primes[100];
cin >> n;
	for(int i=1;i<=n;i++){
		primes[i]=1;
	}
	primes[1]=0;
	for(int j=2;j<=n;j++){
		for(int k=j+1;k<=n;k++){//mistake : i put j++ ..start from the next,j+1
			if(k%j==0) {
				primes[k]=0;
	//			cout << "accessed number is" << k<< endl;
			}

		}//getting  nothing means all have been assigned 0;
	}

	//spill the beans
	for(int spill=2;spill<=n;spill++){
		if(primes[spill]==1)
			cout << spill << "" << endl;
	//	cout << primes[spill] <<" "<<"The above are your primes" << endl;
	}
	return 0;
}//still to be optimized