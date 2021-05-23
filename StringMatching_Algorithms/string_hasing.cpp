//polynomial rolling hash

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first;
#define se second;
#define pb push_back;
#define mp make_pair;
#define fo(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define fon(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define fod(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define fosq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define foc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define SORT(v) sort(all(v))
#define TC(t) while (t--)
#define PI 3.1415926535897932384626
const int M=1e9+7;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll poly_hash(string s)
{
	ll p=31,m=1e9+7,p_pwr=1,hash=0;
	for(int i=0;i<s.size();i++)
	{
		hash+=(p_pwr*(s[i]-'a'+1));
		p_pwr*=p;
		p_pwr%=m;
		hash%=m;
	}
	return hash;
}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	int t=1;
	cin>>t;
	while(t--)
	{
		string s;
		cout<<"Enter the string"<<endl;
		cin>>s;
	   cout<<poly_hash(s)<<endl;
	}
	
}

// disadvantages 
// collisions

//advantages
//high probability correct 