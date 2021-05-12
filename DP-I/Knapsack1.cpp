#include<bits/stdc++.h>
using namespace std;

#define ll long long

class Item{
public:
	int wt;
	int val;
};

ll solve(vector<Item> ar,int n,int W)
{
	ll dp[n+1][W+1];

	for(int w=0;w<=W;w++)
	{
		dp[1][w]=0;
	}
	dp[1][ar[1].wt]=ar[1].val;

	for(int i=2;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			dp[i][w]=dp[i-1][w];
			if(ar[i].wt>w)
				continue;
			dp[i][w]=max(dp[i][w],ar[i].val+dp[i-1][w-ar[i].wt]);
		}
	}
	return *max_element(dp[n],dp[n]+W+1);
}

int main()
{
	int n,w;
	cin>>n>>w;
	vector<Item>ar(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i].wt>>ar[i].val;
	}
	cout<<solve(ar,n,w)<<endl;
}