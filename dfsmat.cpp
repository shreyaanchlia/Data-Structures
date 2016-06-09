#include<bits/stdc++.h>
using namespace std;
#define v 5
int graph[v][v]={{0,1,1,1,0},
                 {1,0,0,0,0},
                 {1,0,0,1,1},
                 {1,0,1,0,0},
                 {0,0,1,0,0}
                 };
bool visited[v];
 void dfs(int start)
 {
 	cout<<start<<endl;
 	visited[start]=true;
 	for(int i=0;i<v;i++)
 	{
 		if(!visited[i] && graph[start][i])
 		{
 			visited[i]=true;
 			dfs(i);
 		}
 	}
 }
int main()
{
	dfs(0);
}