#include "GraphD.h"



GraphD::GraphD()
{
}

void GraphD::Insert(edge ed) {

	auto it = std::find(g[ed.first].begin(), g[ed.first].end(), ed.second);
	if (it == g[ed.first].end()) {
		g[ed.first].push_back(ed.second);
		g[ed.second];
	}
	

}


void GraphD::Remove(edge ed) {

	auto it = std::find(g[ed.first].begin(), g[ed.first].end(), ed.second);
	if (it != g[ed.first].end()) {
	
		g[ed.first].erase(it);
	}

}


void GraphD::Print() {

	std::map<vertex, std::vector<vertex>>::iterator it = g.begin();

	for (; it != g.end(); it++) {
		std::cout << "Node: " << it->first;
		for (int i = 0; i < it->second.size(); i++) {
			std::cout << "   ->   " << it->second[i];
		}
		std::cout << std::endl;
	}

}



GraphD::GraphD(std::vector<edge> el)
{
	for (int i = 0; i < el.size(); i++) {
		Insert(edge(el[i].first, el[i].second));
	}
}

GraphD::~GraphD()
{
}
