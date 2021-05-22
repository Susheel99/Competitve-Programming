#include<bits/stdc++.h>
using namespace std;

struct trie {
	trie *nxt[26];
	
	trie()
	{
		for(int i=0;i<26;i++) nxt[i] = NULL;
			
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
	return true;
}

int main()
{
	root = new trie;
	string text = "abaacabacd";
	string pat = "aaca";

	for(int i=0;i<text.size();i++)
	{
		insert(text.substr(i));            //inserting every suffix into trie
	}                                      //abaacabacd - abaacabacd,baacabacd,aacabacd,acabacd,cabacd,abacd
                                           //             bacd,acd,cd,d


	if(in_trie(pat))
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}