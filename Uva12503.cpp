/*******************************************************
Name Problem:Robot Instructions
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
    int T, n, pos, point;
    char inst[101];
    char line[8];
    scanf("%d", &T);
    while(T--){
    	pos = 0;
    	scanf("%d", &n);
    	for (int i = 1; i <=n; i++)
    	{
    		scanf("%s", line);
    		if(line[0]=='L'){
    			--pos;
    			inst[i]='L';
    		}else if(line[0] == 'R'){
    			++pos;
    			inst[i]='R';
    		}else{
    			scanf(" AS %d", &point);
    			if(inst[point] == 'L'){
    				--pos;
    				inst[i] = inst[point];
    			}else{
    				++pos;
    				inst[i] = inst[point];
    			}
    		}
    	}
    	printf("%d\n", pos);
    }

}
int main(){
    fast();
    solve();
    return 0;
}