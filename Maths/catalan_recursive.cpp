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

int catalan(int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 1;
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=catalan(i-1)*catalan(n-i);
	return sum;
}

void solve()
{
	int n;
	cin>>n;
	cout<<catalan(n)<<endl;
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