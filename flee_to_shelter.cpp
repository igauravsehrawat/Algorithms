
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int c,n,m,t,ans;
cin >> c ;
while(c--)
{
cin >> n >> m >> t;
if(n%m ==0)
ans=(n/m)*2*t;
else
ans=(n/m +1 )*2*t;

cout << ans << endl ;

}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

