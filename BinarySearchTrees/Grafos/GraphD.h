#pragma once
#include <utility>
#include <map>
#include <vector>
#include <forward_list>
#include <iostream>
typedef int vertex;
typedef std::pair<int, int> edge;

class GraphD
{
public:
	GraphD();

	//1. Constructor por copia
	GraphD(GraphD *g);

	//2. Constructor a partir de la lista de arcos el
	GraphD(std::vector<edge> el);

	~GraphD();

	//3. Inserta el arco si no existe
	void Insert(edge);

	//4. Borra el arco si existe
	void Remove(edge);

	//5. Verifica si existe un camino desde el vértice initial hasta el vértice final
	bool Path(vertex initial, vertex final);

	//6. 
	bool Path(vertex initial, vertex final, std::forward_list<vertex> vlist);

	//7. Imprime por pantalla la lista de los arcos representando al grafo
	void Print();

	//8. Verifica que el grafo es euleriano
	bool IsEulerian();

	//9. Calcula el índice de un vértice
	int Index(vertex);

private:

	std::map<vertex, std::vector<vertex>> g;
};

