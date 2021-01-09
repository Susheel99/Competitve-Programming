#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number to find prime factors"<<endl;
	cin>>n;
	vector<int>v;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n=n/i;
			}
		v.push_back(i);
		}
	}
	cout<<"The prime factors are"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

