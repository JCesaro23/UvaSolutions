/*******************************************************
Name Problem:Character Recognition?
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
    const string one = ".*...*...*...*...*..";
    const string two = "***...*.***.*...***.";
    const string three = "***...*.***...*.***.";
    int n;
    string number[10];
    char mt[5][40];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < 5; i++)
    {
    	for (int j = 0; j < 4*n; j++)
    	{
    		number[j/4].push_back(getchar());
    	}
    	getchar();
    }
    for (int i = 0; i < n; i++)
    {
    	if(number[i] == one)
    		putchar('1');
    	else if(number[i] == two)
    		putchar('2');
    	else if(number[i] == three)
    		putchar('3');
    }
    putchar('\n');

}
int main(){
    //fast();
    solve();
    return 0;
}