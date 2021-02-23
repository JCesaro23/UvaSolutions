/*******************************************************
Name Problem:Digits
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

int getMinimun(int cont, string number){
	int digits = number.size();
	stringstream ss;
	ss<<digits;
	if(ss.str()==number)
		return cont;
	else
		return getMinimun(cont+1, ss.str());
}

void solve(){
    string input;
    int answer;
    while(cin>>input){
    	if(input == "END")
    		break;
    	answer = getMinimun(1, input);
    	printf("%d\n", answer);
    }
}
int main(){
    fast();
    solve();
    return 0;
}