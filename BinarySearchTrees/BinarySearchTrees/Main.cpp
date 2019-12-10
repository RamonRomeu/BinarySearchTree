#include "BST.h"
#include <iostream>


int main() {


	BST arbol;
	

	if (arbol.Exist(100)==true) {
		std::cout << "existe" << std::endl;
	
	}
	else
		std::cout << "no existe" << std::endl;


	system("pause");
	return 0;


}