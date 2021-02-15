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

bool ratinmaze(char maze[10][10],int soln[][10],int i,int j,int m,int n)
{
	if(i==m && j==n)
	{
		soln[m][n]=1;

		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
			{
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	//inside border case
	if(i>m || j>n)
		return false;

	if(maze[i][j]=='X')
		return false;

	//Assume solution exists through current cell
	soln[i][j]=1;

	bool rightsuccess = ratinmaze(maze,soln,i,j+1,m,n);
	bool downsucces = ratinmaze(maze,soln,i+1,j,m,n);

	//backtracking
	soln[i][j]=0;

	if(rightsuccess || downsucces)
	{
		return true;
	}
	return false;
}





int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    char maze[10][10]={
    	"0000",
    	"00X0",
    	"000X",
    	"0X00",
    };

    int soln[10][10]={0};
    int m=4,n=4;

    bool ans=ratinmaze(maze,soln,0,0,m-1,n-1);

    if(ans==false)
    	cout<<"Path doesn't exist";

    return 0;
	
	
}