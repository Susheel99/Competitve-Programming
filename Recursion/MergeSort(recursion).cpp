#include<iostream>
using namespace std;

void merge(int* a, int s, int e)
{
    int mid = (s + e) / 2;
    int temp[100];
    int i = s, j = mid + 1, k = s;
    while (i <= mid && j <= e)
    {
        if (a[i] > a[j])
        {
            temp[k++] = a[j++];
        }
        else
            temp[k++] = a[i++];
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }
    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }

}

void mergesort(int* a, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    mergesort(a, s, mid);
    mergesort(a, mid + 1, e);

    merge(a, s, e);
}

int main()
{
    int a[5] = { 4,2,1,5,3 };
    mergesort(a, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}