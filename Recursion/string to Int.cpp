#include<iostream>
using namespace std;

int stringint(char* s, int n)
{
    if (n == 0)
        return 0;

    int digit = s[n - 1] - '0';
    int smallans = stringint(s, n - 1);

    return smallans * 10 + digit;

}

int main()
{
    int i;
    char a[] = "1234";
    // int n=strlen(a);
    int p = stringint(a, 4);
    cout << p + 1 << endl;
}