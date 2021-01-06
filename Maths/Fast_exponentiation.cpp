#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a,ll n)
{
	if(n==0)
		return 1;

	ll subprob=power(a,n/2);
	if(n&1)
	{
		return a*subprob*subprob;
	}
	return subprob*subprob;
}

int main()
{
	ll n;
	cout<<"Enter the base:";
	cin>>n;
	cout<<"Enter the power:";
	ll p;
	cin>>p;
	cout<<power(n,p)<<endl;
}
