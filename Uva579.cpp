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
    float a, b;
    while(scanf("%d:%d", &h, &m) && (h|m)){
    	a = 30.0 * (h%12) + (m*0.5);
    	b = 6.0*(m%60);
    	if(a<b)
            swap(a,b);
        float angle = a-b;
        if(angle <= 180)
            printf("%.3f\n", angle);
        else
            printf("%.3f\n", 360.0 - angle);
    }
}
int main(){
    fast();
    solve();
    return 0;
}