#ifndef __GRAPH_H__
#define __GRAPH_H__
#include "Node.h"
#include <list>
class Graph
{
public:
	int V;
	list <Node> *adj;
	void DFSUtil(int v, bool visited[]);
	Graph();
	~Graph();
};
#endif

