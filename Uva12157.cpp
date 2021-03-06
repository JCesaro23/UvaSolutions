/*******************************************************
Name Problem:Tariff Plan
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
    int T, n, seg;
    int mile, juice, idx = 1;
    scanf("%d", &T);
    while(T--){
    	mile = juice = 0;
    	scanf("%d", &n);
    	for (int i = 0; i < n; i++)
    	{
    		scanf("%d", &seg);
    		mile += ((seg/30)+1) * 10;
    		juice += ((seg/60)+1) * 15;
    	}
    	printf("Case %d: ", idx);
    	if(mile == juice) printf("Mile Juice %d\n", mile);
    	else if(mile < juice) printf("Mile %d\n", mile);
    	else printf("Juice %d\n", juice);
    	idx++;
    }
}
int main(){
    fast();
    solve();
    return 0;
}