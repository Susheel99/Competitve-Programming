#include<bits/stdc++.h>
using namespace std;

struct trie {
	trie *nxt[26];
	bool ended;
	trie()
	{
		for(int i=0;i<26;i++) nxt[i] = NULL;
			ended = false;
	}
};

trie *root;

void insert(string s)
{
	trie *cur =root;

	for(int i=0;i<s.size();i++)
	{
		if(cur->nxt[s[i]-'a']== NULL) 
			cur->nxt[s[i]-'a'] = new trie();
		cur = cur->nxt[s[i]-'a'];
	}
	cur->ended= true;
}

bool in_trie(string s)
{
	trie *cur =root;

	for(int i=0;i<s.size();i++)
	{
		if(cur->nxt[s[i]-'a']== NULL) 
			return false;
		cur = cur->nxt[s[i]-'a'];
	}
	return cur->ended;
}

int main()
{
	root = new trie;
	
	insert("rahul");
	insert("rohit");
	insert("virat");
	insert("susheel");

	if(in_trie("virat"))
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}