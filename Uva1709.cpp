/*******************************************************
Name Problem:Amalgamated Artichokes
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
    int p, a, b, c, d, n;
    while(scanf("%d %d %d %d %d", &p, &a, &b, &c, &d) == 5){
    	scanf("%d", &n);
    	double max_dif = 0;
    	double max = p*(sin((a+b))+cos((c+d))+2);
    	for(int k=2; k<=n; k++){
    		double curr = p*(sin((a*k+b))+cos((c*k+d))+2);
    		if(max>curr){
    			if(max_dif < max-curr){
    				max_dif = max - curr;
    			}
    		}else{
    			max = curr;
    		}
    	}
    	printf("%.8lf\n", max_dif);
    }
}
int main(){
    fast();
    solve();
    return 0;
}