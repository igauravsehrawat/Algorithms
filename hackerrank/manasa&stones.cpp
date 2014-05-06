#include <iostream>

using namespace std;

int main() {

	int n,a,b,testcases,remainin_other,possible_outcome;
	cin >> testcases ;
	while(testcases--){
		cin >> n;
		cin >> a;
		cin >> b;
		for(int outer = n-1; outer >=0; outer --){
			remainin_other = n- 1 - outer; 
			possible_outcome = outer*a + remainin_other*b;
			cout <<  possible_outcome << " " ; 


		 }
		 cout << endl;
		// 	for(int inner = 0 ; inner < b ; inner++){
		// 		possible_outcome = 
		// 	}

		}


	return 0 ;

}