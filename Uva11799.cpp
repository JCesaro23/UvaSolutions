/*******************************************************
Name Problem:Horror Dash
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
    int t, n, ci, speed;
    int idx = 1;
    scanf("%d", &t);
    while(t--){
    	speed = 0;
    	scanf("%d", &n);
    	for (int i = 0; i < n; i++)
    	{
    		scanf("%d", &ci);
    		speed = max(speed, ci);
    	}
    	printf("Case %d: %d\n", idx, speed);
    	idx++;
    }
}
int main(){
    fast();
    solve();
    return 0;
}