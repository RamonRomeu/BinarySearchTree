#pragma once

struct Node {
	Node* left;
	Node* right;
	int info;

	Node(int i) { info = i; right = nullptr; left = nullptr; };

};


class BST
{
public:

	Node* root;

	BST();
	~BST();


	Node* Search(int key);
	Node* SearchR(int key, Node* n);

	void Insert(int key);
	void InsertR(int key, Node* n);

	bool Exist(int key);
	bool ExistR(int key, Node* n);
};

