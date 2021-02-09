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

void bin_str(char * arr,int n,int idx)
{
	if(idx==n){
		arr[idx]='\0';
		cout<<arr<<endl;
		return;
	}

	//ll r1=0,r2=0,r3=0,r4=0;
	if(idx==0)
	{
		arr[0]='1';
		bin_str(arr,n,idx+1);
		arr[0]='0';
		bin_str(arr,n,idx+1);
	}
	else{
		if(arr[idx-1]!='1')
		{
			arr[idx]='1';
			bin_str(arr,n,idx+1);
		}
		arr[idx]='0';
		bin_str(arr,n,idx+1);
	}
	//return r1+r2+r3+r4;

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
		int n;
		cin>>n;
		char arr[100];

		bin_str(arr,n,0);
	}
	
}