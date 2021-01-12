#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fi first;
#define se second;
#define pb push_back;
#define mp make_pair;
#define fo(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define fon(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define fod(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define fosq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define foc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define TC(t) while (t--)
#define mod 10e9+7

void solve()
{
	ll n;
	cin>>n;
	ll k=8;
	vector<ll>p {2,3,5,7,11,13,17,19};
	//fo(i,0,k) cin>>p[i];


	ll subsets=(1<<k)-1;
	ll ans=0;
	for(ll i=1;i<=subsets;i++)
	{
		ll denom=1ll;
		ll setBits=__builtin_popcount(i);

		for(int j=0;j<p.size();j++)
		{
			if(i&(1<<j))
			{
				denom=denom*p[j];
			}
		}
	
	if(setBits&1)
	{
		ans+=n/denom;
	}
	else
	{
		ans-=n/denom;
	}
}
cout<<ans<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	cin>>t;
	while(t--){
	solve();
	}
}