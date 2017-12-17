#include <iostream>
#include <string>

using namespace std;

typedef struct Node {
	int data;
	struct Node* nextNode;
}Node;

class LinkedQueue {
private:
	int size;
	Node* front;
	Node* rear;

public:
	LinkedQueue()
	{
		size = 0;
		front = NULL;
		rear = NULL;
	}

	~LinkedQueue()
	{
		while (!isEmpty())
		{
			Node* deq = dequeue();
			delete deq;
		}
	}

	void enqueue(int data)
	{
		Node* newNode = new Node();
		newNode->data = data;
		newNode->nextNode = NULL;

		if (front == NULL)
		{
			front = newNode; rear = newNode;
		}
		else
		{
			rear->nextNode = newNode;
			rear = newNode;
		}

		size++;
	}

	Node* dequeue()
	{
		Node* temp = front;

		if (front->nextNode == NULL)
		{
			rear = NULL; front = NULL;
		}
		else
		{
			front = front->nextNode;
		}

		size--;
		return temp;
	}

	bool isEmpty() { return front == NULL; }
	int getSize() { return size; }

};


int main()
{
	LinkedQueue lq;
	int size;

	lq.enqueue(50);
	lq.enqueue(60);
	lq.dequeue();
	lq.enqueue(80);
	lq.enqueue(90);
	lq.dequeue();
	lq.enqueue(89);

	size = lq.getSize();
	for (int i = 0; i < size; i++)
	{
		cout << "Dequeued data : " << lq.dequeue()->data << endl;
	}

	return 0;
}