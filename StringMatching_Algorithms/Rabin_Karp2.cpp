//Rabin karp using prefix sum 
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

const int p=31;

int power_exp(ll a,ll b)
{
	ll res=1;
	while(b)
	{
		if(b& 1ll)
		{
			res*=a;
			res%=M;
		}
		b/=2;
		a*=a;
		a%=M;
	}
	return res;
}

int inv(int a)
{
	return power_exp(a,M-2);
}


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
	//cin>>t;
	while(t--)
	{
	   
	   string text="abababbabab",pat="aba";
	   //cin>>pat;
	   ll n=text.size(),m=pat.size();

	   ll text_hash=poly_hash(text.substr(0,m));
	   ll pat_hash = poly_hash(pat);


	   ll prefix[n];

	   for(int i=0;i<n;i++)
	   {
	   	prefix[i]=(text[i]-'a'+1)*power_exp(p,i);
	   	prefix[i]%=M;
	   }
	   for(int i=1;i<n;i++)
	   {
	   	prefix[i]+=prefix[i-1];
	   	prefix[i]%=M;
	   }

	   for(int i=0;i<n;i++)
	   {
	   	ll new_hash=prefix[i+m-1];

	   	if(i-1>=0)
	   	{
	   		new_hash-=prefix[i-1];
	   	}
	   	new_hash+=M;
	   	new_hash%=M;

	   	 if(new_hash == (pat_hash*power_exp(p,i))%M)
	   	{
	   		cout<<i<<endl;
	   	}
	   }
	}
	
}

