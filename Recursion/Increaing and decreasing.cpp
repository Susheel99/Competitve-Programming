#include<iostream>
using namespace std;

void dec(int n)
{
	if (n == 1)
	{
		cout << n << endl;
		return;
	}

	cout << n << endl;
	dec(n - 1);
}

void inc(int n)
{
	if (n == 1)
	{
		cout << n << endl;
		return;
	}

	inc(n - 1);
	cout << n << endl;
}

int main()
{
	int n;
	cin >> n;
	inc(n);
	cout << "*********************"<< endl;
	dec(n);
}