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

bool canplace(int stalls[],int n,int cw,int min_sep)
{
	int last_cow=stalls[0];

	int cnt=1;
	fo(i,1,n)
	{
		if(stalls[i]-last_cow>=min_sep)
		{
			last_cow=stalls[i];
			cnt++;
			if(cnt==cw)
				return true;
		}
	}
	return false;
}

int solve()
{
	int n,cw;
	cin>>n>>cw;
	int stalls[n];
	fo(i,0,n) cin>>stalls[i];
	sort(stalls,stalls+n);

	int s=0,e=stalls[n-1]-stalls[0];

	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;

		bool placedcows = canplace(stalls,n,cw,mid);

		if(placedcows)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
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
	   solve();
	}
	
}