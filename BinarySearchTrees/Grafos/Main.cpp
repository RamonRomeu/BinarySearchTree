

#include "GraphD.h"
#include <iostream>


int main() {

	std::vector<edge> v;
	v.push_back(edge(1, 1));
	v.push_back(edge(1, 2));
	v.push_back(edge(1, 55));
	v.push_back(edge(1, 43));
	v.push_back(edge(62, 1));
	v.push_back(edge(12, 2));
	v.push_back(edge(12, 25));
	v.push_back(edge(12, 43));


	GraphD grafo = GraphD(v);

	grafo.Print();

	system("pause");
	return 0;


}