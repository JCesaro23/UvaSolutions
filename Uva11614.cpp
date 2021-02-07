/*******************************************************
Name Problem:Etruscan Warriors Never Play Chess
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
    long long t,i,n,s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        s=(sqrt(1+4*2*n)-1)/2;
        cout<<s<<'\n';
    }
}
int main(){
    fast();
    solve();
    return 0;
}