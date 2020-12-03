#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using namespace std;

int n,m;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void floodfill(int mat[][101],int x,int y,int p,int k)
{
    if((x>=n or y>=m) or (x<0 or y<0))
    return ;
    
    else if(mat[x][y]!=p)
    return ;
    
    mat[x][y]=k;
    for(int i=0;i<4;i++)
    {
        floodfill(mat,x+dx[i],y+dy[i],p,k);
    }
    
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int mat[101][101];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int x,y,k;
    cin>>x>>y>>k;
    int p=mat[x][y];
    floodfill(mat,x,y,p,k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl;
 
}
}