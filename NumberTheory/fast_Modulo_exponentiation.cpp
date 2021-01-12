#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll Power(int a,int b)
{
	ll res=1;
	while(b){
	if(b&1)
	{
		res=(res*a)%mod;
	}
	b=b>>1;
	a=(a*a)%mod;
    }
    return res;
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
	ll a,b;
	cin>>a>>b;
	cout<<Power(a,b)<<endl;
}
}