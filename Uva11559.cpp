/*******************************************************
Name Problem:Event Planning
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
    int n, b, h, w, p, wa;
    int minCost;
    while(scanf("%d %d %d %d", &n, &b, &h, &w)==4){
    	minCost = 30000000;
    	bool accepted;
    	bool travel = false;
    	for (int i = 0; i < h; i++)
    	{
    		accepted = false;
    		scanf("%d", &p);
    		for (int j = 0; j < w; j++)
    		{
    			scanf("%d", &wa);
    			if(wa>=n)
    				accepted = true;
    		}
    		if (accepted && (n*p <= b))
    		{
    			travel = true;
    			minCost = min(minCost, n*p);
    		}
    	}
    	if(travel)
    		printf("%d\n", minCost);
    	else
    		printf("stay home\n");
    }
}
int main(){
    fast();
    solve();
    return 0;
}