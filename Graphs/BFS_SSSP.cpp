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

	void bfs_sssp(T src)
	{
		queue<T>q;
		map<T,int>dist;

		for(auto nodepair:l)
		{
			T node = nodepair.first;
			dist[node]=-2;
		}
		dist[src]=0;
		q.push(src);
		while(!q.empty())
		{
			T node=q.front();
			q.pop();
			for(int nbr:l[node])
			{
				if(dist[nbr]==-2)
				{
					q.push(nbr);
					dist[nbr]=dist[node]+1;
				}
			}
		}
		for(auto dt:l)
		{
		    T node = dt.first;
			cout<<node<<" Distance from source is "<<dist[node]<<endl;
		}
	}
};

int main()
{
    
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	Graph<int> g;

	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,0);
	g.addEdge(3,4);
	g.addEdge(4,5);

	g.bfs_sssp(4);
}