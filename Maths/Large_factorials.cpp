#include<bits/stdc++.h>
using namespace std;

void multiply(int *a,int &n,int no)
{
    int carry=0;
    for(int i=0;i<n;i++)
    {
        int product=a[i]*no+carry;
        a[i]=product%10;
        carry=product/10;
    }

    while(carry)
    {
        a[n]=carry%10;
        carry=carry/10;
        n++;
    }
}

int main()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int *a=new int[1000];
    for(int i=0;i<1000;i++)
    {
        a[i]=0;
    }
    a[0]=1;
    int n=1;
    for(int i=2;i<=number;i++)
    {
        multiply(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}