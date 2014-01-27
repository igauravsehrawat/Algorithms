//cypher_row_col.cpp


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;



int main() {
	int rows=2,cols=2;
cin >> rows >> cols ;
int matrix[rows][cols];
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		cin >> matrix[rows][cols];
	}
}


//rows=matrix.length();
//	cols= matrix[0].length();
bool *rows_bool[new bool[rows]]={false};
bool *cols_bool[new bool[cols]]={false};
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(matrix[rows][cols]==0){
				rows_bool[i]=true;
				cols_bool[j]=true;
			}
		}
	}
	

	for(int k=0;k<rows;k++){
		for(int l=0;l<cols;l++){
			if(rows_bool[k] || cols_bool[l])
				matrix[k][l]=0; //just need either row or column true or false value

		}
	}

for(int o=0;o<rows;o++){
	for(int p=0;p<cols;p++){
		cout << matrix[o][p] << " " ;
	}
	cout << endl; 
}

return 0;

}