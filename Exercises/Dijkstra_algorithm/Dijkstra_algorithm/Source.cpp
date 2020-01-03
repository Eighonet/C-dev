using namespace std;
#include <iostream>

struct node {
	node(int** a);
	node& operator=(node& a);
	int** neighbours;
	bool condition = 0;
};


class graph {
public:
	graph(node* a);
	~graph() = default;
private:
	node* nodes;
};

graph::graph(node* a)
{
	nodes = a;
}

node::node(int ** a)
{
	int** neigbours = a;
}

node & node::operator=(node & a)
{
	neighbours = a.neighbours;
}

int main()
{
	node A();


}
