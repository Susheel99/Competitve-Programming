#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first;
#define se second;
#define pb push_back;
#define mp make_pair;
#define fo(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define fon(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define fod(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define fosq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define foc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define SORT(v) sort(all(v))
#define TC(t) while (t--)
#define PI 3.1415926535897932384626
const int M=1e9+7;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

bool solve(string s1,string s2)
{
	

	if(s1.size()!=s2.size())
		return false;
	if(s1==s2)
		return true;
	if(s1.size()%2!=0)
		return false;

	int mid = (s1.size()-1)/2;
    string a1=s1.substr(0,mid+1);
    string a2=s1.substr(mid+1,mid+1);

     mid = (s2.size()-1)/2;
    string b1=s2.substr(0,mid+1);
    string b2=s2.substr(mid+1,mid+1);

    if((solve(a1,b1) and solve(a2,b2)) || (solve(a1,b2) and solve(a2,b1)))
    	return true;
    else
    	return false;

	
}


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
	int t=1;
	cin>>t;
	while(t--)
	{
		string s1,s2;
	    cin>>s1>>s2;
	   if(solve(s1,s2)) 
	   	cout<<"YES"<<endl;

	   else 
	   	cout<<"NO"<<endl;
	}
	
}


// string s="abcdefgh";
//     int mid = (s.size()-1)/2;
//     cout<<s.substr(0,mid+1)<<endl;
//     cout<<s.substr(mid+1,mid+1)<<endl;