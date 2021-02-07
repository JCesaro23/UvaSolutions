/*******************************************************
Name Problem:Relational Operator
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
    int a, b;
    scanf("%d", &t);
    while(t--){
    	scanf("%d %d", &a, &b);
    	printf("%c\n", a>b ? '>': b>a ? '<': '=');
    }
}
int main(){
    fast();
    solve();
    return 0;
}