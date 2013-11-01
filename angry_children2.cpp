#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

        long  long int n,k,candies,maximum,minimum,fairness=0;
        vector<long long int> insertcandies;
        cin >> n >> k;

                while(n--){
                cin >> candies;
                insertcandies.push_back(candies);
		}
                sort(insertcandies.begin(),insertcandies.end());
//                maximum=insertcandies[0];
  //              minimum=insertcandies[0];
    //            for(long long int i =0;i<k-1;i++){


      //          maximum = max(maximum,insertcandies[i+1]);
        //        minimum=min(minimum,insertcandies[i+1]);

	for(long long int outer=0;outer<k;outer++){
		for(long long int inner=outer+1;inner<k;inner++){
		
		fairness+=abs(insertcandies[outer]-insertcandies[inner]);
		
//		cout << insertcandies[outer] << " "  << insertcandies[inner] << endl;
			}


				}		

                

		cout << fairness << endl;
        //      cout <<  maximum-minimum << endl;
		return 0 ;
                        }
              
