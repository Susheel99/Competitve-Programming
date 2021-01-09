#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	vector<int>v;
	int i=0;
	for(i=2;i*i<=n;i++)
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
	if(n!=1)
		v.push_back(n);

	cout<<"The prime factors are"<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";

	cout<<endl;
}
