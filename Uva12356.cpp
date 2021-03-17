/*******************************************************
Name Problem:problem
Problem Category:category
Problem Tester: Julio Cesar Mamani Villena.
Email: mamanivillenajc@gmail.com
*******************************************************/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define MOD 1000000007
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define MAXN 100005
using namespace std;
void solve(){
	int L, R, sL[MAXN], sR[MAXN], s, b;
	bool sB[MAXN];
	while(scanf("%d %d", &s, &b) && (s|b)){
		for (int i = 1; i <= s; i++)
		{
			sL[i]=i; sR[i]=i;
			sB[i] = true;
		}
		sL[0] = sR[0]= sL[s+1] = sR[s+1] = 0;
		sB[0] = false;
		sB[s+1] = false;
		while(b--){
			scanf("%d %d", &L, &R);
			for (int i = L; i <= R; ++i)
			{
				sL[i]=sL[sL[L-1]];
				sR[i]=sR[sR[R+1]];
				sB[i] = false;
			}

			if(sL[L]!=0 && sB[L-1])
				printf("%d ", sL[L]);
			else
				printf("* ");

			if(sR[R]!=0 && sB[R+1])
				printf("%d\n", sR[R]);
			else
				printf("*\n");
		}
		printf("-\n");
	}

	//falta corregir sigue fallando

}
int main(){
    fast();
    solve();
    return 0;
}