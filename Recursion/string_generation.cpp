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

void generate_string(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//1 digit
	int digit=in[i]-'0';
	char ch=digit+'A'-1;
	out[j]=ch;
	generate_string(in,out,i+1,j+1);

	//2 digit
	if(in[i+1]!='\0')
	{
		int secondDigit=in[i+1]-'0';
		int no=digit*10+secondDigit;
		if(no<=26){
		char ch=no+'A'-1;
		out[j]=ch;
		generate_string(in,out,i+2,j+1);
	}
	}
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
		char in[100];
		cin>>in;

		char out[100];
		generate_string(in,out,0,0);
	}
	
}