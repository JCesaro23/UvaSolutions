/*******************************************************
Name Problem:Score
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
    int T, res, c;
    char s[100];
    scanf("%d", &T);
    while(T--){
    	c = res = 0;
    	scanf("%s", s);
    	int lmt = strlen(s);
    	for(int i=0; i<lmt; i++){
    		if(s[i] == 'O')
    			res += (++c);
    		else
    			c = 0;
    	}
    	printf("%d\n", res);
    }
}
int main(){
    fast();
    solve();
    return 0;
}