/*******************************************************
Name Problem:Searching for Nessy
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
    int t;
    int n, m;
    scanf("%d", &t);
    while(t--){
    	scanf("%d %d", &n, &m);
    	printf("%d\n", (n/3)*(m/3));
    }
}
int main(){
    fast();
    solve();
    return 0;
}