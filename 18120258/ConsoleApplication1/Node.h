#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;

class Node
{
public:
	char MaNode;
	int Data;
	void addNode(Node*);
	Node();
	~Node();
};
#endif
