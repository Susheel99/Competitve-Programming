#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T>>l;
public:
	//Bidirectional graph
	void addEdge(T x,T y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
    
	void bfs(T src){
		queue<T>q;
		map<T,int>visited;

		q.push(src);
		while(!q.empty()){
			T node = q.front();
			cout<<node<<"->";
			q.pop();
			visited[node]=1;
			for(int nbr:l[node])
			{
				if(visited[nbr]==0)
				{
					q.push(nbr);
					visited[nbr]=1;
				}
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

	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.addEdge(3,5);
	g.addEdge(2,4);
	g.addEdge(4,6);

	g.bfs(2);

}