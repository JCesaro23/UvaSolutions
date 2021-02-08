/*******************************************************
Name Problem:Love Calculator
Problem Category:funtion
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

int reduce(int num){
	int aux;
	while(num >=10){
		aux = 0;
		while(num>0){
			aux += num%10;
			num/=10;
		}
		num = aux;
	}
	return num;
}

double love_calculator(string s1, string s2){
	double love;
	int a=0, b=0;
	for(char c:s1){
		if(isalpha(c))
			a += tolower(c)-96;
	}
	for(char c:s2){
		if(isalpha(c))
			b += tolower(c)-96;
	}
	a = reduce(a);
	b = reduce(b);
	love = a>b ? (b*1.0)/a : (a*1.0)/b;
	return love;
}
void solve(){
    string s1, s2;
    while(getline(cin, s1) && getline(cin,s2)){
    	printf("%.2lf %\n", love_calculator(s1, s2)*100);
    }
}
int main(){
    fast();
    solve();
    return 0;
}