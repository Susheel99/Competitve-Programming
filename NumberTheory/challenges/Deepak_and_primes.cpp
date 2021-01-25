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

vector <bool> v(100000000,true);//[100000000];
int arrp[100000000];//1e8

void sieve(ll n)
{
	for(ll i=3;i<=n;i+=2)
	{
		v[i]=true;
	}
	for(ll i=3;i<=n;i+=2)
	{
		if(v[i]==true)
		{
			for(ll j=i*i;j<=n;j+=i)
			{
				v[j]=false;
			}
		}
	}
	v[0]=false;
	v[1]=false;
	v[2]=true;

}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;

	    ll n=100000000;
		sieve(n);
		ll k=0;
		arrp[0]=2;
		for(ll i=3;i<=n;i+=2)
	    {
		   if(v[i]==true){
			  arrp[++k]=i;
		   }
	    }

	cin>>t;
	while(t--)
	{
		ll a;
		cin>>a;
	    cout<<arrp[a-1]<<endl;
	}
	
}