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

int solve(vector<int> a,int s,int e,int key)
{
	while(s<=e)
	{
		int mid=(s+e)/2;

		if(a[mid]==key)
			return mid;

		else if(a[s]<=a[mid])
		{
			if(a[s]<=key and key<=a[mid])
			{
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}
		}
		else //if(a[e]>=a[mid])
		{
			if(a[e]>=key and key>=a[mid])
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}

		}
	}

	return -1;
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
		int n,key;
		cin>>n>>key;
		vi v(n);
		fo(i,0,n) cin>>v[i];


	   cout<<solve(v,0,n-1,key)<<endl;
	}
	
}