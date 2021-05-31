#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,cost;
	cin>>n>>m;
	int dp[n][n];
	cout<<"Enter the cost"<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>cost;
		  dp[i][j]=cost;	
		}
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0 && j==0)
			{
				dp[i][j]=dp[i][j];
			}
			else if(i==0)
			{
				dp[i][j]+=dp[i][j-1];
			}
			else if(j==0)
			{
				dp[i][j]+=dp[i-1][j];
			}
			else
			{
				dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[n-1][m-1]<<endl;
}