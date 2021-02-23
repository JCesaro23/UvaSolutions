/*******************************************************
Name Problem:Cabin Baggage
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
    int T, accept=0;
    double const lmt = 125;
    double const maxWeight = 7;
    double length, width, depth, weight;
    scanf("%d", &T);
    while(T--){
    	scanf("%lf %lf %lf %lf", &length, &width, &depth, &weight);
    	double result = length + width + depth;
    	bool est = length<=56.00 && width<=45.00 && depth<=25.00;
    	if((est || result <= lmt) && weight<=maxWeight){
    		printf("1\n");
    		accept++;
    	}else{
    		printf("0\n");
    	}
    }
    printf("%d\n", accept);
}
int main(){
    fast();
    solve();
    return 0;
}