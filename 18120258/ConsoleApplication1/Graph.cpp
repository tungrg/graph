#include "Graph.h"



void Graph::DFSUtil(int v, bool visited[])
{
	visited[v] = true;


	for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (visited[i]);
	}
}

Graph::Graph()
{
}


Graph::~Graph()
{
}
