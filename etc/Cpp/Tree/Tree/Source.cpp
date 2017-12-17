#include <iostream>
#include <string>

using namespace std;

class Tree
{
private:
	char Data;
	Tree* LeftChild;
	Tree* RightSibling;
public:
	Tree() {
	}
	Tree(char Data)
	{
		LeftChild = NULL;
		RightSibling = NULL;
		this->Data = Data;
	}

	void appendChildNode(Tree* Child)
	{
		if (LeftChild == NULL) LeftChild = Child;
		else {
			Tree* temp = LeftChild;
			while (temp->RightSibling != NULL)
			{
				temp = temp->RightSibling;
			}
			temp->RightSibling = Child;
		}
	}

	void printTree(int Depth)
	{
		for (int i = 0; i < Depth; i++)
		{
			cout << " ";
		}
		cout << Data << endl;

		if (LeftChild != NULL) LeftChild->printTree(Depth + 1);
		if (RightSibling != NULL) RightSibling->printTree(Depth);
	}
};

int main()
{
	Tree Root('A'), B('B'), C('C'), D('D'), E('E'), F('F');

	Root.appendChildNode(&B);
	B.appendChildNode(&C);
	B.appendChildNode(&D);
	Root.appendChildNode(&E);
	E.appendChildNode(&F);

	Root.printTree(0);
}
