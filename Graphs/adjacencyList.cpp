#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int v;
	list<int>*l;
public:
	Graph(int v)
	{
		this->v=v;
		l = new list<int>[v];
	}
	void addEdge(int x,int y)
	{
        l[x].push_back(y);
        l[y].push_back(x);
	}

	void printList()
	{
		for(int i=0;i<v;i++)
		{
			cout<<"vertices of "<<i<<"-->>";
			for(int nbr:l[i])
			{
				cout<<nbr<<",";
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
       Graph g(5);

       g.addEdge(0,2);
       g.addEdge(1,3);
       g.addEdge(0,4);

       g.printList();
}