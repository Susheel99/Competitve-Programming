//Integer overflow testcase n=31,32;

#include<bits/stdc++.h>
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

ll binomial(ll n,ll k)
{
	ll res=1;
	if(k>n-k)
		k=n-k;

	for(ll i=0;i<k;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}

ll catalan(ll n)
{
	ll cat=binomial(2*n,n);

	ll res=cat/(n+1);

	return res;
}

void solve()
{
	ll n;
	cin>>n;
	cout<<catalan(n)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;
	cin>>t;
	while(t--){
	solve();
	}
}