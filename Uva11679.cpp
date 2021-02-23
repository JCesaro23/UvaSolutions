/*******************************************************
Name Problem:Sub-prime
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
    int B, N, D, C, V, banks[21];
    while(scanf("%d %d", &B, &N) && (B|N)){
    	for (int i = 1; i <= B; i++)
    		scanf("%d", &banks[i]);

    	for (int i = 0; i < N; i++)
    	{
    		scanf("%d %d %d", &D, &C, &V);
    		banks[D] -=V;
    		banks[C] += V;
    	}
    	bool ban = true;
    	for (int i = 1; i <= B; i++)
    		if(banks[i]<0)
    			ban = false;

    	if (ban)
    		printf("S\n");
    	else
    		printf("N\n");
    	
    }
}
int main(){
    fast();
    solve();
    return 0;
}