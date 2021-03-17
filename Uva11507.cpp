/*******************************************************
Name Problem:Bender B. Rodríguez Problem
Problem Category:adhoc simulator
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
	int L;
	string res, ord;
    map<string, map<string, string>> bend;
    bend["+x"]["+y"] = "+y";
    bend["+x"]["-y"] = "-y";
    bend["+x"]["+z"] = "+z";
    bend["+x"]["-z"] = "-z";
    bend["-x"]["+y"] = "-y";
    bend["-x"]["-y"] = "+y";
    bend["-x"]["+z"] = "-z";
    bend["-x"]["-z"] = "+z";

    bend["+y"]["+y"] = "-x";
    bend["+y"]["-y"] = "+x";
    bend["+y"]["+z"] = "+y";
    bend["+y"]["-z"] = "+y";
    bend["-y"]["+y"] = "+x";
    bend["-y"]["-y"] = "-x";
    bend["-y"]["+z"] = "-y";
    bend["-y"]["-z"] = "-y";

    bend["+z"]["+y"] = "+z";
    bend["+z"]["-y"] = "+z";
    bend["+z"]["+z"] = "-x";
    bend["+z"]["-z"] = "+x";
    bend["-z"]["+y"] = "-z";
    bend["-z"]["-y"] = "-z";
    bend["-z"]["+z"] = "+x";
    bend["-z"]["-z"] = "-x";

    while(cin>>L && L!=0){
    	res = "+x";
    	for (int i = 1; i < L; ++i)
    	{
    		cin>> ord;
    		if(ord!="No")
    			res = bend[res][ord];
    	}
    	cout<<res<<'\n';
    }

}
int main(){
    fast();
    solve();
    return 0;
}