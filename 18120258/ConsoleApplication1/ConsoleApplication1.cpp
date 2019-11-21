#include "Node.h"

int main()
{
	Node a, b, c, d, e, f;
	a.addNode(&b);
	a.addNode(&d);
	b.addNode(&a);
	b.addNode(&d);
	b.addNode(&c);
	c.addNode(&b);
	c.addNode(&d);
	d.addNode(&a);
	d.addNode(&b);
	d.addNode(&c);

}
