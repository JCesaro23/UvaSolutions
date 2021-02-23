/*******************************************************
Name Problem:Open Credit System
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
    int T, n, est[200000];
    scanf("%d", &T);
    while(T--){
    	int maxx = -200000; int max_dif = -200000;
    	scanf("%d", &n);
    	for (int i = 0; i < n; i++)
    	{
    		scanf("%d", &est[i]);
    	}
    	for (int i = 0; i < n-1; i++)
    	{
    		if(est[i]>maxx)
    			maxx = est[i];

    		if(maxx - est[i+1] > max_dif)
    			max_dif = maxx - est[i+1];
    	}
    	printf("%d\n", max_dif);
    }
}
int main(){
    fast();
    solve();
    return 0;
}