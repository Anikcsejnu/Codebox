#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > graph;
int q=0, m = -1;                                // m is for largest path and q is one of the end vertex of that path

void dfs(int i, int count, vector<bool>& v)
{
    v[i] = true;
    for(int j=0;j<graph[i].size();j++)
    {
        if(!v[graph[i][j]])
        {
            count++;                            // count is the length of the path from the starting vertex to current vertex
            dfs(graph[i][j], count, v);
        }
    }
    if(count>m)
    {
        m= count;
        q=i;
    }
    count--;                                    // decreasing count since the method return to its calling function
}


int main()
{
    int n, x, i, y;
    cin>>n;
    graph = vector< vector<int> >(n);
    vector<bool> visited(n);
    vector<bool> v(n);
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--, y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(0, 0, visited);
    m=-1;
    cout<<q<<endl;
    dfs(q, 0, v);
    cout<<q<<endl;
    cout<<m<<endl;
}
