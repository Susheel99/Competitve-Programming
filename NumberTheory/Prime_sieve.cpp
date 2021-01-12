//running upto 10^3

#include<bits/stdc++.h>
using namespace std;

void prime_seive(int *p,int n)
{

	for(int i=3;i<n;i+=2)   //marking all odd numbers as primes
	{
		p[i]=1;
	}
	for(int i=3;i<=n;i++)  //marking all multiples of numbers marked above as not primes
	{
		if(p[i]==1)
		{
			for(int j=i*i;j<=n;j+=i)   //Directly going to square of that prime and starting marking multiples
	   		{                          //from that point
				p[j]=0;
			}
		}
	}
	p[0]=p[1]=0;
	p[2]=1;

	for(int i=0;i<n;i++)
	{
		if(p[i]==1)
			cout<<i<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int p[1000];
	prime_seive(p,n);
}