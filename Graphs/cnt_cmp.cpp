#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T>>l;

public:
	void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(T src,map<T,bool> &visited)
	{
		cout<<src<<"-";
		visited[src]=true;
		for(auto nbr:l[src])
		{
			if(!visited[nbr])
			{
				dfs_helper(nbr,visited);
			}
		}
	}

	void dfs()
	{
		map<T,bool>visited;
		for(auto nbr:l)
		{
			visited[nbr.first]=false;
		}
		int no=1;
		for(auto nbr:l)
		{
			if(!visited[nbr.first])
			{
				cout<<"Component-"<<no++<<"->";
			    dfs_helper(nbr.first,visited);
			    cout<<endl;
		    }
		}
	}
};

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

     Graph<int>g;
     g.addEdge(0,1);
     g.addEdge(1,2);
     g.addEdge(2,3);
     g.addEdge(3,0);
     g.addEdge(0,4);

     g.addEdge(6,5);
     g.addEdge(6,7);

     g.addEdge(8,8);

     g.dfs();
}