/*******************************************************
Name Problem:Emoogle Balance
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
    int n, x, obsq, reminder, emoogle_balance;
    int idx = 1;
    while(scanf("%d", &n) && n!=0 ){
    	obsq = reminder = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		scanf("%d", &x);
    		if(x>0) obsq++;
    		else reminder++;
    	}
    	emoogle_balance = obsq - reminder;
    	printf("Case %d: %d\n", idx, emoogle_balance);
    	idx++;
    }
}
int main(){
    fast();
    solve();
    return 0;
}