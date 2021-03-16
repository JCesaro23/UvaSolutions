/*******************************************************
Name Problem:Jolly Jumpers
Problem Category:STL
Problem Tester: Julio Cesar Mamani Villena.
Email: mamanivillenajc@gmail.com
*******************************************************/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define MOD 1000000007
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define MAXN 3005
using namespace std;
void solve(){
	bool mark[MAXN];
    int n, a, b, ans, cont;
    while(true){
    	memset(mark, 0, sizeof(mark));
    	if(scanf("%d", &n)==EOF)
    		break;
    	scanf("%d", &a);
    	n--;
    	cont = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		scanf("%d", &b);
    		ans = abs(a-b);
    		if(ans <=n && mark[ans]==false){
    			mark[ans] = true;
    			cont++;
    		}
    		a = b;
    	}
    	if(cont == n)
    		printf("Jolly\n");
    	else
    		printf("Not jolly\n");

    	
    }
}
int main(){
    fast();
    solve();
    return 0;
}