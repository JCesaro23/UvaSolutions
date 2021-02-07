/*******************************************************
Name Problem:Automatic Answer
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
typedef long long ll;
void solve(){
    int t;
    ll n;
    scanf("%d", &t);
    while(t--){
    	scanf("%lld", &n);
    	ll res = n*315LL+36962;
    	if(res<0) res*=-1;
    	res /=10;
    	printf("%lld\n", res%10);
    }
}
int main(){
    fast();
    solve();
    return 0;
}