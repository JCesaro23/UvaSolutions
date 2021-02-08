/*******************************************************
Name Problem:Packing for Holiday
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
    const int inches = 20;
    int T, L, W, H;
    int idx = 1;
    scanf("%d", &T);
    while(T--){
    	scanf("%d %d %d", &L, &W, &H);
    	bool sw = L<=inches && W<=inches && H<=inches;
    	printf("Case %d: %s\n", idx, sw ? "good":"bad");
    	idx++;
    }
}
int main(){
    fast();
    solve();
    return 0;
}