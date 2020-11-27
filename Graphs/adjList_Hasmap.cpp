#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
	map<string,list<pair<string,int>>>l;

	void addEdge(string x,string y,bool bidir,int wt)
	{
		l[x].push_back(make_pair(y,wt));
		if(bidir)
		{
			l[y].push_back(make_pair(x,wt));
		}
	}

	void printlist()
	{
		for(auto p:l)
		{
			string city=p.first;
			list<pair<string,int>>nbrs=p.second;
			cout<<city<<"-> ";
			for(auto nbr:nbrs)
			{
				cout<<'('<<nbr.first<<","<<nbr.second<<")";
			}
			cout<<endl;
		}
	}
};

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	Graph g;
	g.addEdge("A","B",true,30);
	g.addEdge("A","D",true,50);
	g.addEdge("C","D",false,25);
	g.printlist();
}