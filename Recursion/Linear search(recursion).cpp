#include<iostream>
using namespace std;

int search(int a[],int i, int n, int key)
{
    if (i == n)
        return -1;
    if (a[i] == key)
        return i;

    return search(a, i+1, n, key);
}

int main()
{
    int n;
    cin >> n;
    int a[5] = { 1,2,4,5,6 };
    cout << search(a,0, 5, n) << endl;
}