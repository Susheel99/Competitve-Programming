#include<iostream>
using namespace std;

int isSorted(int a[], int n)
{
	if (n == 0 || n == 1)
	{
		return true;
	}

	if (a[0] < a[1] and isSorted(a + 1, n - 1))
	{
		return true;
	}
	return false;
}

int main()
{
	int a[5]={1,5,7,2,10};
		cout<<isSorted(a,5)<<endl;
}