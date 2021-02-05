#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using namespace std;

string l[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };


void spell(int n)
{
    static int p = 0;
    if (n == 0)
        return;


    spell(n / 10);
    int t = n % 10;


    cout << l[t] << " ";
}

int main()
{
    int no;
    cin >> no;
    while (no--)
    {
        int n;
        cin >> n;
        spell(n);
        cout << endl;
    }

}