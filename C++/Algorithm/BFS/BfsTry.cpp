#include <bits/stdc++.h>
using namespace std;

#define MAX 100
vector<int> edges[MAX];
vector<int> cost[MAX];
int visited[MAX];
int level[MAX];

void bfs(int s);

int main()
{
	int v, e, source, dest;
	cin >> v >> e;
	
	for(int i = 0; i < e; i++)
	{
		int u, v;
		cin >> u >> v;
		
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	
	cin >> source >> dest;
	
	bfs(source);
	
	cout << level[dest] << endl;
}

void bfs(int s)
{
	queue<int> q;
	q.push(s);
	level[s] = 0;
	visited[s] = 1;
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		
		for(unsigned int i = 0; i < edges[u].size(); i++)
		{
			int v = edges[u][i];
			
			if(visited[v] == 0)
			{
				visited[v] = 1;
				q.push(v);
				level[v] = level[u] + 1;
			}
		}
	}
}
