/*******************************************************
Name Problem:Jumping Mario
Problem Category:Control flow
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
    int t, n, previous_jump, jump, high, low;
    int idx = 1;
    scanf("%d", &t);
    while(t--){
    	high = low = 0;
    	scanf("%d", &n);
    	scanf("%d", &previous_jump);
    	printf("Case %d: ", idx);
    	idx++;
    	if(n==1){
    		printf("0 0\n");
    		continue;
    	}
    	for(int i=1; i<n; i++){
    		scanf("%d", &jump);
    		if(jump > previous_jump) high++;
    		else if(jump < previous_jump) low++;
    		previous_jump = jump;
    	}
    	printf("%d %d\n", high, low);
    }
}
int main(){
    fast();
    solve();
    return 0;
}