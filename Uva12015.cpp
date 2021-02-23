/*******************************************************
Name Problem:Google is Feeling Lucky
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
    vector<string> URLs;
    string URL;
    int T, value, max;
    int idx = 1;
    cin>>T;
    while(T--){
    	URLs.clear();
    	max = 0;
    	for (int i = 0; i < 10; i++)
    	{
    		cin>>URL >>value;
    		if(value>=max){
    			if(value == max){
    				URLs.push_back(URL);
    			}else{
    				URLs.clear();
    				URLs.push_back(URL);
    				max = value;
    			}
    		}
    	}
    	cout<<"Case #"<<idx<<":\n";
    	for(auto url: URLs)
    		cout<<url<<'\n';
    	idx++;
    }

}
int main(){
    fast();
    solve();
    return 0;
}