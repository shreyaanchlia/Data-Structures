#include<bits/stdc++.h>
using namespace std;
#define v 5
#define inf 12345
int graph[v][v]={{0,4,0,2,0},
                 {0,0,3,0,0},
                 {0,0,0,0,6},
                 {0,1,5,0,4},
                 {0,0,0,0,0}};
int d[v];
int parent[v];
bool visited[v];
int min_index()
{
	int index;
	int mn=inf;
	for(int i=0;i<v;i++)
	{
		if(!visited[i] && d[i]<mn)
		{
         mn=d[i];
         index=i;
		}
	}
	return index;
}
void dijkstra(int start)
{
	d[start]=0;
	for(int i=0;i<v-1;i++)
	{
	int u=min_index();
	for(int i=0;i<v;i++)
	{
      if(graph[u][i] && d[i]>=d[u]+graph[u][i])
      {
      	d[i]=d[u]+graph[u][i];
      	parent[i]=u;
      }
	}
	visited[u]=true;
}
}
int main()
{
	memset(d,inf,sizeof d);
	memset(parent,-1,sizeof parent);
	dijkstra(0);
	for(int i=0;i<v;i++)
		cout<<i<<" "<<d[i]<<endl;
}