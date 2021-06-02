#include<bits/stdc++.h>
using namespace std;

#define ll long long

int mod=1e9+7;
int dp[10000][10000] {0};

ll paths(ll row,ll col)
{
	if(dp[0][0]==-1)
	{
		return 0;
	}

	for(ll i=0;i<row;i++)
	{
		if(dp[i][0]==-1)
			break;
		dp[i][0]=1;
	}
	for(ll j=0;j<col;j++)
	{
		if(dp[0][j]==-1)
			break;
		dp[0][j]=1;
	}
	for(ll i=1;i<row;i++)
	{
		for(ll j=1;j<col;j++)
		{
			if(dp[i][j]==-1)
				continue;

			dp[i][j]=0;

			if(dp[i][j-1]!=-1)
			{
				dp[i][j]=dp[i][j-1]%mod;
			}

			if(dp[i-1][j]!=-1)
			{
				dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
			}
		}
	}
	if(dp[row-1][col-1]==-1)
		return 0;
	return dp[row-1][col-1];
}

int main()
{
	ll n,m,p;
	cin>>n>>m>>p;
	
	for (ll i = 0; i < p; ++i)
	{
		ll x,y;
		cin>>x>>y;
		dp[x-1][y-1]=-1;
	}
	cout<<paths(n,m)<<endl;
}