#include <iostream>

using namespace std;

int main() {

	int n,a,b,testcases,remainin_other,possible_outcome , duplicity=0;
	cin >> testcases ;
	while(testcases--){
		cin >> n;
		cin >> a;
		cin >> b;
		if (a > b ){
		for(int outer = 0; outer < n; outer ++){
			remainin_other = n- 1 - outer; 
			possible_outcome = outer*a + remainin_other*b;

			if(possible_outcome != duplicity)
				cout <<  possible_outcome << " " ; 
			
			duplicity = possible_outcome ;


		 }
		}
		else {
		for(int outer = n-1 ; outer >= 0; outer --){
			remainin_other = n- 1 - outer; 
			possible_outcome = outer*a + remainin_other*b;
			
			if( possible_outcome != duplicity)
				cout <<  possible_outcome << " " ; 

			duplicity = possible_outcome ;

		 }	
		}
		 cout << endl;
		// 	for(int inner = 0 ; inner < b ; inner++){
		// 		possible_outcome = 
		// 	}

		}


	return 0 ;

}