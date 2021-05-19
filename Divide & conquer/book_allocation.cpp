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

bool isposible(vector<int> v,int n,int m,int curr_min)
{
	int studentUsed=1,pages_read=0;

	fo(i,0,n)
	{
		if(pages_read+v[i]>curr_min)
		{
			studentUsed++;
			pages_read=v[i];

			if(studentUsed>m)
				return false;
		}
		else
		{
			pages_read+=v[i];
		}
	}
	return true;
}

int solve(vector<int>v,int n,int m)
{
	
	int sum=0;

	if(n<m)
		return -1;

	fo(i,0,n) sum+=v[i];

	int s=v[n-1],e=sum,ans=INT_MAX;

	while(s<=e)
	{
		int mid=(s+e)/2;

		if(isposible(v,n,m,mid))
		{
			ans=min(ans,mid);
			e=mid-1;
		}
		else{
			//not possible to divide at x pages
			//increase the pages
			s=mid+1;
		}
	}


	return ans;
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
		int n,m;
	    cin>>n>>m;

	    vi v(1000);
	    fo(i,0,n) cin>>v[i];

	    cout<<solve(v,n,m)<<endl;
	}
	
}