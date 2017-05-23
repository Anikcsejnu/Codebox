#include<bits/stdc++.h>
#define pb push_back
#define fr front()
#define tp top()
using namespace std;

map<int, int>visited;

void BFS(int s, map<int, vector<int> >G)
{
    queue< int >q;
    q.push(s);
    visited[s] = 0;

    while(!q.empty())
    {
        int top = q.fr;
        for(int i = 0;i<G[top].size();i++)
        {
            int n = G[top][i];
            if(!visited.count(n))
            {
                visited[n] = visited[top] + 1;
                q.push(n);
            }
        }
        q.pop();
    }
}
int main()
{
    int edges, cases = 0;
    while(scanf("%d", &edges)==1 &edges!=0)
    {
        map<int, vector<int> >G;
        for(int i = 0;i<edges;i++)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            G[x].pb(y);
            G[y].pb(x);
        }
        int ttl, source;
        while(scanf("%d %d", &source, &ttl)==2)
        {
            if(source==0 && ttl==0) break;
            map<int,int>::iterator it;
            visited.clear();
            BFS(source, G);
            int Count = 0;
            for(it = visited.begin();it!=visited.end();it++)
            {
                if((*it).second>ttl)
                {
                    Count++;
                }
            }

//            cout<<"C = "<<Count<<endl;
//            cout<<"G = "<<G.size()<<endl;
//            cout<<"v = "<<visited.size()<<endl;
//            cout<<"ttl = "<<ttl<<endl;
            Count = Count + G.size() - visited.size();

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++cases, Count, source, ttl);
         }
    }
    return 0;
}

