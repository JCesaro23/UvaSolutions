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
	int L, R, s, b, ansL, ansR;
	bool sB[MAXN];
	while(scanf("%d %d", &s, &b) && (s|b)){
		memset(sB, true, sizeof(sB));
		ansL = ansR = -1;
		sB[0]=false; sB[s+1]=false;
		for (int i = 0; i < b; ++i)
		{
			ansL = ansR = -1;
			scanf("%d %d", &L, &R);
			for (int pos = L; pos <=R; ++pos)
			{
				sB[pos]=false;
			}
			for (int izq = L-1; izq > 0; --izq)
			{
				if (sB[izq])
				{
					ansL = izq;
					break;
				}
			}

			for (int der = R+1; der <=s; ++der)
			{
				if (sB[der])
				{
					ansR = der;
					break;
				}
			}

			if(ansL != -1)
				printf("%d", ansL);
			else
				printf("*");

			if(ansR != -1)
				printf(" %d\n", ansR);
			else
				printf(" *\n");

		}
		printf("-\n");
	}

	

}
int main(){
	//	SIGUE FALLANDO
    fast();
    solve();
    return 0;
}