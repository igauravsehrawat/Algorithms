#include<cmath>

#include<cstdio>

#include<vector>

#include<iostream>

#include<algorithm>

 

using namespace std;
 

int main()

{

 

int t,m,n,a[100],b[100],topica,topicb;

//vecor declaration

//int matchedindex=0,add=0,modify=0,del=0,left=0,to_be=0,result=0,i,j,k;

vector<int> studentlist;vector<int> facultylist;

cin >> t;

while(t--){

int matchedindex=0,add=0,modify=0,del=0,left=0,to_be=0,result=0,i,j,k,a[100]={0},b[100]={0};

 

cin >> m ;

 

	for (int i=0;i<m;i++){

	cin >> topica ;

	a[i]=topica;

	//studentlist.push_back(a);
	

	}

cin >> n;

	for(int j=0;j<n;j++){

	cin >>topicb;

	for(int k=0;k<m;k++){

	if(topicb==a[k])matchedindex++;}

	//facultylist.push_back(b)

//	cout << matchedindex << endl;

	b[j]=topicb;

	}

		if(matchedindex < n){

		left=abs(matchedindex-m);

		to_be=abs(n-matchedindex);

		del=abs(left-to_be);

		left=abs(left-del);

		modify=left;

			}
		

		if(matchedindex==n){

		left=0;

		del=abs(matchedindex-m);

		}
		

		if(matchedindex>n){

		add=abs(matchedindex-m);		

			}

result=del+modify+add;

cout << result << endl;

 

}

 

return 0;

}
