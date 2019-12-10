#include "BST.h"


BST::BST()
{

	root = new Node(20);
	root->left = new Node(10);
	root->right = new Node(30);
	root->left->left = new Node(3);
	root->left->right = new Node(6);
	root->right->left = new Node(25);
	root->right->right = new Node(35);

}


BST::~BST()
{


}



Node* BST::Search(int key) {

	return SearchR(key, root);


}

Node* BST::SearchR(int key, Node* n) {


	if (n == nullptr)
		return nullptr;


	if (n->info == key) {
		return n;
	}

	if (n->left != nullptr) {
		if (key < n->info)
			return SearchR(key, n->left);

	}

	if (n->right != nullptr) {
		if (key > n->info)
			return SearchR(key, n->right);
	}

	return nullptr;


}


void BST::Insert(int key) {

	return InsertR(key, root);

}


void BST::InsertR(int key, Node* n) {


}

bool BST::Exist(int key) {


	return(Search(key) != nullptr);
		

}


bool BST::ExistR(int key, Node* n) {


	return false;
}