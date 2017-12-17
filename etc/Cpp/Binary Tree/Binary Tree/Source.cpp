#include <iostream>
#include <string>

using namespace std;

class Node {
private:
	char Data;
	Node* Left;
	Node* Right;
public:
	Node(char Data) : Data(Data), Left(NULL), Right(NULL)
	{}

	void setLeft(Node* Left) { this->Left = Left; }
	void setRight(Node* Right) { this->Right = Right; }
	char getData() { return Data; }
	Node* getLeft() { return Left; }
	Node* getRight() { return Right; }
};

class Tree {
private:
	Node* root;
public:
	Tree() : root(NULL) {}
	Tree(Node* root) : root(root) {}

	void PreorderPrint(Node* Leaf)
	{
		if (Leaf == NULL) return;
		cout << Leaf->getData() << " ";
		PreorderPrint(Leaf->getLeft());
		PreorderPrint(Leaf->getRight());
	}

	void InorderPrint(Node* Leaf)
	{
		if (Leaf == NULL) return;
		InorderPrint(Leaf->getLeft());
		cout << Leaf->getData() << " ";
		InorderPrint(Leaf->getRight());
	}

	void PostorderPrint(Node* Leaf)
	{
		if (Leaf == NULL) return;
		PostorderPrint(Leaf->getLeft());
		PostorderPrint(Leaf->getRight());
		cout << Leaf->getData() << " ";
	}
};


int main()
{
	Node A('A'), B('B'), C('C'), D('D'), E('E'), F('F'), G('G'), H('H'), I('I');
	Tree tree(&A);

	A.setLeft(&B);
	B.setLeft(&D);
	D.setLeft(&H);
	D.setRight(&I);
	B.setRight(&E);
	A.setRight(&C);
	C.setLeft(&F);
	C.setRight(&G);

	cout << "Preorder Traversal" << endl;
	tree.PreorderPrint(&A);

	cout << endl << "Inorder Traversal" << endl;
	tree.InorderPrint(&A);

	cout << endl << "Postorder Traversal" << endl;
	tree.PostorderPrint(&A);

	return 0;


}