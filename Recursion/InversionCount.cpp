#include<iostream>
using namespace std;

#define ll long long

ll merge(ll* a, ll s, ll e)
{
    ll mid = (s + e) / 2;
    ll i = s;
    ll j = (mid + 1);
    ll k = s;

    ll temp[1000000];

    ll cnt = 0;

    while (i <= mid && j <= e)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k++] = a[j++];
            cnt += mid - i + 1;
        }
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

    return cnt;
}

ll inversion_count(ll* a, ll s, ll e)
{
    if (s >= e)
        return 0;

    ll mid = (s + e) / 2;
    ll x = inversion_count(a, s, mid);
    ll y = inversion_count(a, mid + 1, e);
    ll z = merge(a, s, e);

    return x + y + z;
}

int main()
{
    int no;
    cin >> no;
    while (no--)
    {
        ll i, n;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << inversion_count(a, 0, n - 1) << endl;
    }
}