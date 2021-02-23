/*******************************************************
Name Problem:Laser Sculpture
Problem Category:adhoc
Problem Tester: Julio Cesar Mamani Villena.
Email: mamanivillenajc@gmail.com
*******************************************************/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define MOD 1000000007
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
    int A, C, xi, xj, laser;
    while(scanf("%d %d", &A, &C) && (A|C)){
    	laser = 0;
    	xi = A;
    	for (int it = 0; it < C; it++)
    	{
    		scanf("%d", &xj);
    		if(xi>xj)
    			laser+= (xi-xj);
    		xi = xj;
    	}
    	printf("%d\n", laser);
    }
}
int main(){
    fast();
    solve();
    return 0;
}