/*******************************************************
Name Problem:Clock Hands
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
#define deb(x) cout<<(#x)<<" = "<<(x)<<'\n';
using namespace std;
void solve(){
    int h, m;
    float hg, hgr, mg, mgr;
    while(scanf("%d:%d", &h, &m) && (h|m)){
    	hg = 30.0 * (h%12) + (m*0.5);
    	hgr = 360.0 - hg;
    	mg = 6.0*m;
    	mgr = 360.0 - mg;
    	printf("[ %.3f , %.3f]\n", hgr, mg);
    	printf("[ %.3f , %.3f]\n", hg, mgr);
    	printf("\n");
    	//falta acabar

    }
}
int main(){
    fast();
    solve();
    return 0;
}