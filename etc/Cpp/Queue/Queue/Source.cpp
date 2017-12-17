#include <iostream>

using namespace std;

typedef struct Node {
	int data;
}Node;

class CircularQueue
{
private:
	Node* node;
	int capacity;
	int front;
	int rear;
public:
	CircularQueue(int capacity) : capacity(capacity + 1)
	{
		node = new Node[this->capacity];
		front = 0; rear = 0;
	}
	~CircularQueue()
	{
		delete[] node;
	}

	void enqueue(int data)
	{
		int pos;

		if (rear == capacity - 1)
		{
			pos = rear; rear = 0;
		}
		else
		{
			pos = rear++;
		}

		node[pos].data = data;
	}

	int dequeue()
	{
		int pos = front;

		if (front == capacity - 1)
		{
			front = 0;
		}
		else
		{
			front++;
		}

		return node[pos].data;
	}

	int getSize() {
		if (front <= rear)
		{
			return rear - front;
		}
		else
		{
			return capacity - front + rear;
		}
	}

	bool isEmpty(){
		return front == rear;
	}

	bool isFull() {
		if (front <= rear)
		{
			return (rear - front) == (capacity - 1);
		}
		else
		{
			return (rear + 1) == front;
		}
	}

	int getRear() {
		return rear;
	}

	int getFront() {
		return front;
	}
};

int main()
{
	CircularQueue cq(10);
	int size;

	cq.enqueue(10); cq.enqueue(20); cq.enqueue(30);
	cq.dequeue(); cq.dequeue(); cq.dequeue();
	cq.enqueue(10); cq.enqueue(20); cq.enqueue(30);
	cq.enqueue(20); cq.enqueue(20); cq.enqueue(20);
	cq.enqueue(20); cq.enqueue(20); cq.enqueue(520);

	size = cq.getSize();

	for (int i = 0; i < size; i++)
	{
		cout << "dequeued data : " << cq.dequeue() << ", Front : " << cq.getFront() << ", Rear : " << cq.getRear() << endl;
	}
	return 0;
}