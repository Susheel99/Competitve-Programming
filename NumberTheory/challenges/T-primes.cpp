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
const int M=1e9+7;

bool isprime(ll n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];

		for(ll i=0;i<n;i++)
		{
			ll res=floor(sqrt(v[i]));
			//cout<<res<<" "<<sqrt(v[i])<<endl;
			if(v[i]==1)
				cout<<"NO"<<endl;
			
			else if(res-sqrt(v[i])==0)
			{
				if(isprime(res))
				cout<<"YES"<<endl;

			    else
			    	cout<<"NO"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}	
}