/*******************************************************
Name Problem:Summing Digits
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
    int n, aux;
    while(scanf("%d", &n) && n!=0){
    	while(n>9){
    		aux = 0;
    		while(n>0){
    			aux += (n%10);
    			n/=10;
    		}
    		n = aux;
    	}
    	printf("%d\n", n);
    }
}
int main(){
    fast();
    solve();
    return 0;
}