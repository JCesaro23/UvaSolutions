/*******************************************************
Name Problem:Language Detection
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
    
    map<string, string> leng;
    leng["HELLO"] = "ENGLISH"; leng["HOLA"]="SPANISH"; leng["HALLO"]="GERMAN"; leng["BONJOUR"]="FRENCH";
    leng["CIAO"]="ITALIAN"; leng["ZDRAVSTVUJTE"]="RUSSIAN";
    string word;
    int idx = 1;
    while(cin>>word && word!="#"){
    	printf("Case %d: ", idx);
    	if(leng.find(word)!=leng.end())
    		printf("%s\n", leng[word].c_str());
    	else
    		printf("UNKNOWN\n");
    	idx++;
    }

}
int main(){
    fast();
    solve();
    return 0;
}