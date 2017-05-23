#include<bits/stdc++.h>
using namespace std;


vector<int>adj[100];
set<int>node;
int vis[100];
int dist[100];
int p[100];
void bfs(int s, int n, int d)
{
    int c = 0;
   for(int i = 0;i<n;i++) vis[i] = 0;
    queue<int>q;

    q.push(s);
    vis[s] = 1;
    dist[s] = 0;
    p[s] = s;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i<adj[u].size();i++)
        {
            if(vis[adj[u][i]]==0)
            {
                int v = adj[u][i];
                vis[v] = 1;
                dist[v] = dist[u] + 1;
                p[v] = u;
                q.push(v);

            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<dist[i]<<endl;
    }

//    if(vis[t]==0)
//    {
//        printf("No path\n");
//        return;
//    }
//    vector<int>path;
//    path.push_back(t);
//    int now = t;
//    while(now!=s)
//    {
//        now = p[now];
//        path.push_back(now);
//     }
//
//
//    for(int i = path.size()-1;i>=0;i--)
//    {
//        printf("%d ", path[i]);
//    }
}
int main()
{
    int nc,ttl, s, u, v;
    scanf("%d", &nc);
    for(int i = 0;i<nc;i++)
    {
        scanf("%d%d", &u, &v);
        adj[u].push_back(v);
        node.insert(u);
        node.insert(v);
       // adj[v].push_back(u);
    }
    int l = node.size();

    while(cin>>s>>ttl)
    {
        if(s==0 && ttl==0)
        {
            return 0;
        }
        bfs(s, l, ttl);
    }

    return 0;
}
